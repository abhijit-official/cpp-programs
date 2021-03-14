#include <iostream>
#include <string>

using namespace std;


class Cars{                     
    public:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    int price;
    
    Cars(){
        cout<<"dhdh";
        cout<<" ";
    }
    
    Cars(string company_name, string model_name, string fuel_type, float mileage, int price){
        
        this->company_name=company_name;
        this->model_name=model_name;
        this->fuel_type=fuel_type;
        this->mileage=mileage;
        this->price=price;
        
    } 
     void display(){
         cout<<"companyname" " "<<company_name<<endl;
         cout<<"model name" " "<<model_name<<endl;
         cout<<"fuel type" " "<<fuel_type<<endl;
         cout<<"mileage" " "<<mileage<<endl;
         cout<<"price" " "<<price<<endl;
     }
    
};
int main(){
    
    Cars car1("toyota", "xyz", "petrol", 10, 234556),car2("maruthi", "xyz1", "petrol1", 11, 2345562);
    
    car1.display();
    car2.display();
    
   
    return 0;
    
}