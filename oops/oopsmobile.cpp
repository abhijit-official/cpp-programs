/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <string>
using namespace std;

class mobile{
    public:
    string modelname;
    int ram;
    float camera;
    float storage;
    
  };

int main()
{
   mobile s1;
    s1.modelname="modelname is redmi";
    s1.ram=4;
    s1.camera=12.5;
    s1.storage=64;
   
    std::cout << s1.modelname << std::endl;
    std::cout <<"ram is " <<s1.ram<<"GB" << std::endl;
    std::cout <<"camera is " <<s1.camera<<"mp" << std::endl;
    std::cout <<"storage of " <<s1.storage <<"GB" <<std::endl;

    return 0;
}
