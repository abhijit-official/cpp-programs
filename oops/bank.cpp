
#include <iostream>
#include <string>
using namespace std;
class Customer{
    public:
    int acc_no;
    string name;
    float balance;
    string branch;
    
    void createAccount(string name){
        this->acc_no = 0;
        this->name = name;
        this->balance = 0.0;
        this->branch = "ppur";
        cout<<"\nAccount created!";
    }
    
};


int main()
{
    cout<<"Welcome to XYZ bank\n";
    cout<<"1. create account\n2. view balance\n3. withdraw cash\n===>";
    int p;
    cin>>p;
    switch(p){
        case 1:
            Customer c1;
            string name;
            cout<<"enter name of customer:";
            cin>>name;
            c1.createAccount(name);
            break;
        // case 'b':
        //     cout<<"value of a is b";
        //     break;
        // default:
        //     cout<<"value of a is "<<a;
    } 
    return 0;
}


