#include<iostream>
    #include<string>
    using namespace std;
    class Student{
        public:
        int id;
        string name;
        float salary;
    };
    int main(){
        Student s1;
        s1.id=12;
        s1.name="abhi";
        s1.salary= 222.99;
        
        cout<<s1.id <<endl;
        cout<<s1.name <<endl;
        cout<<s1.salary <<endl;
        
        return 0;
        
        
        
    }