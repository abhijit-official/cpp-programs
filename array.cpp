/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int array[5];
    for (int i = 0; i <= 4; i++) {
        /* code */
        std::cin >> array[i];
    }
    cout<<"array enterd bybyou is:"<<endl;
    for (int i = 0; i <= 4; i++) {
        /* code */
        std::cout << array[i] << std::endl;
    }
}    
