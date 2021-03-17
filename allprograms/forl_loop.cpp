#include <iostream>
using namespace std;
int main()
{
    int n=5,p=1;
    // for rows
    for (int i =1; i <=5; i++) {
        
        // for coloumn
        for (int j = 1; j <=3; j++) {
                  
          std::cout <<i<<" "<<j<<" ";
          
        }
        cout<<endl;
    }
    return 0;
}