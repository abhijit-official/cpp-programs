#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int id;
    string name;
    float salary;

    Student(){
        cout<<"\nobject is created\n";
    }
    Student(int id,string name,float salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
        cout<<"\nobject s2 is created\n";
    }
    
    ~ Student(){
        cout<<"desctrustuctor is called";
    }
    void display(){
        cout<<id <<endl;
        cout<<name <<endl;
        cout<<salary <<endl;
    }
};
int main(){
    Student s1 = Student();
    Student s3 = Student();
    Student s2 = Student(10,"asdasd",10.20);
    
    s2.display();    
    
    return 0; 
}