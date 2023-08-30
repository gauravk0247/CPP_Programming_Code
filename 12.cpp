#include <iostream>
using namespace std;
int main()
{
    // cout<<"Enter a number you want to print multiplication table"<<endl;
    // int a;
    // cin>>a;
    // cout<<"---------------------------------------------------"<<endl;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i * a << endl;
    // }
    // cout<<"---------------------------------------------------"<<endl;

    // for(int i=5;i>0;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int i=5;
    // while(i>0){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i--;
    // }

    // int i = 5;
    // do{
    //     int j = 1;
    //     do{
    //         cout<<"*";
    //         j++;
    //     }while(j<=i);
    //     cout<<endl;
    //     i--;
    // }while(i>0);

    // int age;
    // cout<<"Enter your age \t";
    // cin>>age;
    // if(age==21){
    //     cout<<"You are eligible for voting";
    // }
    // else if(age==60 || age>=60){
    //     cout<<"You are sinior citizen person";
    // }
    // else if(age>=21){
    //     cout<<"you are voting to every election";
    // }
    // else{
    //     cout<<"You are not eligible for voting";
    // }

    // cout<<"Enter a id\n";
    // int id;
    // cin>>id;
    // switch (id)
    // {
    // case 1:
    //     cout<<"You are engineering student"<<endl;
    //     break;
    // case 2:
    //     cout<<"You are pharmacy student"<<endl;
    //     break;
    // case 3:
    //     cout<<"You are nursing student"<<endl;
    //     break;
    // case 4:
    //     cout<<"You are school boy"<<endl;
    //     break;
    // default:
    //     cout<<"You try again"<<endl;
    //     break;
    // }

    // int n;
    // for(int i=1;i>=0;i++){
    //     cout<<"debt";
    //     cout<<endl;
    // }

    int a;
    cout<<"Enter any input value you want to print the multiplication table"<<endl;
    cin>>a;
    cout<<"---------------------------------------------"<<endl;
    for(int i=1;i<=10;i++){
        cout<<i*a<<endl;
    }
}