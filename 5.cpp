#include <iostream>

using namespace std;

int c = 45;
int main(){
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

// ************Float, long and double data types*********
    // float d = 34.50F;
    // long double e = 34.50L;
    // cout<<"The size of 34.50 is "<<sizeof(34.50)<<endl;
    // cout<<"The size of 34.50f is "<<sizeof(34.50f)<<endl;
    // cout<<"The size of 34.50F is "<<sizeof(34.50F)<<endl;
    // cout<<"The size of 34.50 is "<<sizeof(34.50)<<endl;
    // cout<<"The size of 34.50l is "<<sizeof(34.50l)<<endl;
    // cout<<"The size of 34.50L is "<<sizeof(34.50L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // cout<<endl;

    // *********Reference variables*************
    // float x = 455.60;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // ******Typecasting********
    int a = 45;
    float b = 45.67;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<(int)b<<endl;

    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    return 0;
}