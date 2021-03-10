
#include<iostream>
    #include<string>
    using namespace std;
    class Student{
        public:
            int id;
            string name;
            float salary;
            
            void registerStudent(int id,string name,float salary){
                this->id = id;
                this->name = name;
                this->salary = salary;
            }
            
            void display(){
                cout <<id <<endl;
                cout <<name <<endl;
                cout <<salary <<endl;
            }
            
    };
    int main(){
        Student s1,s2;
        // s1.id=12;
        // s1.name="abhi";
        // s1.salary= 222.99;
        
        s1.registerStudent(13,"abhi",222.97);
        s1.display();
        
        s2.registerStudent(12,"abhijit",234.45);
        s2.display();
        
        // cout<<s1.id <<endl;
        // cout<<s1.name <<endl;
        // cout<<s1.salary <<endl;
        
        return 0;
        
        
        
    }