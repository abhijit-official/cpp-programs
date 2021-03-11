/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int n=5,p=1;
    for (int i = 1; i<=n; i++) {
        cout<<i<<"\t";
        if(i%5==0){
            cout<<endl;
        }
    }
    
    for (int i = 1; i<=n; i++) {
        for (int j=1;j<=i;j++) {
            /* code */
            cout<<p<<"\t";
            p++;
        }
        cout<<endl;
    }
    
    
    for (int i = 1; i<=n; i++) {
        
        for (int k = 1; k <i ; k++) {
            /* code */
            cout<<"\t";
        }
        for (int j=1;j<=n-i+1;j++) {
            /* code */
            cout<<p<<"\t";
            p++;
            
        }
        cout<<endl;
    }
    
    return 0;
}

    