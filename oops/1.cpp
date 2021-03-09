/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    float salary;
    
    void insert(int roll,string n,float s){
        rollno = roll;
        name =n;
        salary=s;
    }
    
    void display(){
        std::cout << rollno << std::endl;
        std::cout << name << std::endl;
        std::cout << salary << std::endl;
    }
    
    void speak(){
        cout<<"Student is speaking\n";
    }
};

int main()
{
    Student s1,s2;
    // s1.rollno =10;
    // s1.name="abhijit";
    // s1.salary=100.5;
    s1.insert(10,"abhijit",100.5);
    s1.speak();
    s1.display();
    
    s2.insert(11,"abhijit1",200.5);
    s2.speak();
    s2.display();
    
    // std::cout << s1.rollno << std::endl;
    // std::cout << s1.name << std::endl;
    // std::cout << s1.salary << std::endl;
    return 0;
}
