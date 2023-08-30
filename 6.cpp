#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a = 45;
    // cout<<"the value of a was: "<<a<<endl;
    // a = 55;
    // cout<<"the value of a was: "<<a<<endl;

    // Constant in c++
    // const float a = 5.33;
    // cout<<"The value of a was: "<<a<<endl;
    // // a = 45; //You will get in error beacause a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators
    // int a = 45, b = 56, c = 34;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a = 25, b = 25;
    // int c = a*5+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}
