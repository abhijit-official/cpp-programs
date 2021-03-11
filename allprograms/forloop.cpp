#include <iostream>
using namespace std;

int main()
{
    char i,j,ch;
    
    cout<<"enter character:";
    cin>>ch;
    // for rows
   for (int i='a'; i<=ch; i++){ 
        
        // for columns
      for (int j='a'; j<='z'; j++) {
          cout<<char(j);
          
      }
      cout<<endl;
   }
    
    return 0;
}
