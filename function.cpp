/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void sum(int a,int b){
    cout<<"sum:"<<a+b;
}

void diff(int a,int b){
    cout<<"difference:"<<a-b;
}

int main()
{
    char a;
    int p,q;
    cout<<"enter p:";
    cin>>p;
    cout<<"enter q:";
    cin>>q;
    cout<<"enter operator:";
    cin>>a;
    switch(a){
        case '+':
            sum(p,q);
            break;
        case '-':
            diff(p,q);
            break;
        default:
            cout<<"enter valid operator";
    } 
    return 0;
}
