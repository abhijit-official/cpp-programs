


#include<iostream>
using namespace std;
class account{
    public:
    int acc_no;
    string name;
    static int count;
    
    account(int acc_no, string name){
        
        this->acc_no=acc_no;
        this->name=name;
        
        this->count++;
        }    
        void display(){
            
            cout<<acc_no<<""<<name<<endl;
            
        }

};
int account::count=0;
int main(void){
    account a1=account(201," " "abhi");
    account a2=account(202," " "abhi1");
    account a3=account(203," " "abhi2");
    
    a1.display();
    a2.display();
    a3.display();
    
    cout<<"total object are:"<<account::count;
    return 0;
    
    
}


// #include <iostream>  
// using namespace std;  
// class Account {  
//   public:  
//       int accno; //data member (also instance variable)      
//       string name;   
//       static int count;     
//       Account(int accno, string name)   
//         {    
//              this->accno = accno;    
//             this->name = name;    
//             count++;  
//         }    
//       void display()    
//         {    
//             cout<<accno<<" "<<name<<endl;   
//         }    
// };  
// int Account::count=0;  
// int main(void) {  
//     Account a1 =Account(201, "Sanjay"); //creating an object of Account  
//     Account a2=Account(202, "Nakul");   
//      Account a3=Account(203, "Ranjana");  
//     a1.display();    
//     a2.display();    
//     a3.display();    
//     cout<<"Total Objects are: "<<Account::count;  
//     return 0;  