
#include <iostream>
#include <string>
using namespace std;
class Customer{
    public:
    static int acc_no;
    string name;
    float balance;
    string branch;
    
    void createAccount(string name){
        this->name = name;
        this->balance = 0.0;
        this->branch = "ppur";
        cout<<"\nAccount created!";
        this->acc_no++;
    }
    void display(){
        std::cout << "\nAccount Number:" <<acc_no<< std::endl;
        std::cout << "Customer Name:" <<name<< std::endl;
        std::cout << "Balance:" <<balance<< std::endl;
        std::cout << "Branch Name:" <<branch<< std::endl;
    }
    
};

int Customer::acc_no=0;  


int main()
{
    cout<<"Welcome to XYZ bank\n";
    int p;
    do{
        cout<<"\n1. create account\n2. view balance\n3. withdraw cash\n4. exit\n===>";
        cin>>p;
        switch(p){
            case 1:
            {
                Customer c1;
                string name;
                cout<<"\nEnter name of customer:";
                cin>>name;
                c1.createAccount(name);
                c1.display();
                break;
            }
                
            case 4:
                p = 4;
                break;
                
            default:
                cout<<"\nenter right option"<<endl;
                break;
            
        };
    }while(p!=4);
    return 0;
}


