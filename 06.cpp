Training prot_t5_xl_uniref50 model for predicting protein secondary structure using SageMaker Model Parallel. 
 
import sys 
!{sys.executable} -m pip install "sagemaker>=2.48.0" "transformers>=4.12.3" "datasets" --upgrade 
!{sys.executable} -m pip install ipywidgets !{sys.executable} -m pip install s3fs import sagemaker.huggingface import datasets 
 
import sagemaker 
 
sess = sagemaker.Session()
#sagemaker session bucket->used for uploading data, models and logs
#sagemaker will automatically create this bucket if it not exists sagemaker_session_bucket = None if sagemaker_session_bucket is None and sess is not None : #set to default bucket if a bucket name is not given sagemaker_session_bucket = sess.default_bucket() 
 
role = sagemaker.get_execution_role() sess = sagemaker.Session(default_bucket=sagemaker_session_bucket) 
 
print(f"sagemaker role arn: {role}") print(f"sagemaker bucket: {sess.default_bucket()}") print(f"sagemaker session region: {sess.boto_region_name}") 
 
rom datasets import load_dataset from transformers import AutoTokenizer

#dataset used dataset_name = 'agemagician/NetSurfP-SS3'

#s3 key prefix for the data s3_prefix = 'samples/datasets/netsurfp-ss3'
#load dataset dataset = load_dataset(dataset_name) 
 
storage_options = {"anon": True}  # for anonymous connection
#for private buckets, uncomment the following code and add your aws access key id and secret key.
#storage_options = {"key" : aws_access_key_id, "secret" : aws_secret_access_key } import botocore s3_session = botocore.session.Session() storage_options = {"session" : s3_session } 
 
import s3fs fs = s3fs.S3FileSystem(**storage_options)

#save dataset to s3 data_input_path = f 's3://{sess.default_bucket()}/{s3_prefix}/data1' dataset.save_to_disk(data_input_path, fs = fs) 
 
data_input_path fs.ls(data_input_path)

#training script 
!pygmentize ./code/train.py model_name = "Rostlab/prot_t5_xl_uniref50" 
 
from sagemaker.huggingface import HuggingFace

#hyperparameters, which are passed into the training job hyperparameters = {'epochs' : 1, 
                 'train_batch_size': 1, 
                 'model_name': model_name
}

#configuration for running training on smdistributed Model Parallel mpi_options = {
"enabled" : True,
            "processes_per_host" : 8,
}
smp_options = {     "enabled":True, 
    "parameters": { 
        "microbatches": 1, 
        "placement_strategy": "cluster", 
        "pipeline": "interleaved", 
        "optimize": "memory", 
        "partitions": 4, 
        "ddp": True,
#"tensor_parallel_degree" : 2, 
        "shard_optimizer_state": True, 
        "activation_checkpointing": True,  
        "activation_strategy": "each", 
        "activation_offloading": True, 
    } 
} 
 
distribution={ 
    "smdistributed": {"modelparallel": smp_options}, 
    "mpi": mpi_options 
} 
 
huggingface_estimator = HuggingFace(entry_point='train.py', 
                            source_dir='./code',                             instance_type='ml.p3dn.24xlarge',                             instance_count=1,                             role=role,                             transformers_version='4.12',                             pytorch_version='1.9',                             py_version='py38',                             distribution= distribution,                             hyperparameters = hyperparameters,                             keep_alive_period_in_seconds=60*60) # managed warm pool for 60mins

#starting the train job with our uploaded datasets as input huggingface_estimator.fit({'data' : data_input_path}) 
 
predictor = huggingface_estimator.deploy(1,"ml.g4dn.xlarge") predictor.delete_endpoint()
