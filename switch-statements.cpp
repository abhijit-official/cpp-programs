/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"enter option:";
    cin>>a;
    switch(a){
        case 'a':
            cout<<"value of a is a";
            break;
        case 'b':
            cout<<"value of a is b";
            break;
        default:
            cout<<"value of a is "<<a;
    } 
    return 0;
}

