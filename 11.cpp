#include<iostream>
using namespace std;
int main(){
    int a, b;
    // cout<<"Hello World"<<endl;
    // cout<<"Enter a value"<<endl;
    // cin>>a;
    // cout<<"Enter b value"<<endl;
    // cin>>b;
    // cout<<a+b;
    cout<<"Enter any number you want to print the multiplication table"<<endl;
    cin>>a;
    cout<<"----------------------------"<<endl;
    for(int i=1;i<=10;i++){
        cout<<i*a<<endl;
    }
    cout<<"---------------------------"<<endl;
    return 0;
}