#include <iostream>
using namespace std;
int main(){
    // cout<<"This is my 9 program";
    /*Loops in c++
    There are three types of loops in c++:
    1. For loop
    2. While loop
    3. do-while loop
    */

//    For loop in c++
    // int i = 0;
    // cout<<i;
    // i++;
    // Syntax of for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(c++ code);
    // }

    // for (int i = 0; i <= 4; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // While loop 
    // Syntax:
    // while(condition){
    //     c++ statement
    // }

    // int i = 1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop 
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    // do while loop
    // Syntax:
    // do{
    //     c++ statements;
    // }while(condition);

    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);

    // Example of infinite do while loop
    // int i = 1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(true);

    // Exercise of 6 table using do while loop
    int i=1;
    int j=6;
    do{
        cout<<i*j<<endl;
        i++;
    }while(i<=10);

    return 0;
}