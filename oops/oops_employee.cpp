
#include <iostream>
#include <string>
using namespace std;

class employee{
    public:
    int age;
    string name;
    float salary;
    
};

int main(){
    
    employee e1;
    e1.age=21;
    e1.name="abhi";
    e1.salary=22234.43;
    
    cout<<e1.age <<endl;
    cout<<e1.name <<endl;
    cout<<e1.salary <<endl;
    
    return 0;
    
}
