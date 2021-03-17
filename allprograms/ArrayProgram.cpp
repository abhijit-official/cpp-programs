#include <iostream>
using namespace std;

int main(){
    
    int a[5];
    cout<<"enter the value in the array\n";
    
  for(int i=0; i<5; i++){
      
      cin>>a[i];
  }
    cout<<"\n";
    cout<<"the value entered by you are==> ";
    
    for(int i=0; i<5; i++){
        
    cout<<a[i]<<" ";    
    
    }
    
    return 0;
}