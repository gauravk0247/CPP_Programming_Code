#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    glo = 56;
    // int a = 45;
    // int b = 55;
    int a=45, b = 55;
    float pi = 3.14;
    char c = 'V';
    bool g = true;
    bool h = false;
    sum();
    cout<<glo<<h;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is: "<<b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}