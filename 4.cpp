// There are two types of header files
// 1.System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" -->This will produce error if this.h file is no present in the current directory
using namespace std;
int main(){
    int a = 5, b=10;
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the Arithmetic operators in c++:"<<endl;
    // Arithmetic operators 
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a/b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The value of ++a is "<<a++<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a = 4, b = 6;
    // char d = 'D';

    // Comparison Operators
    cout<<"Following are the Comparison operators in c++:"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical Opeartors
    cout<<"Following are the logical operators in c++:"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) && (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b) is:"<<(!(a==b))<<endl;
    return 0;
}