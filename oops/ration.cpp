/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

class RationDukan{
    public:
    int maka;
    float jwari;
    int tandul;
    
    void getMaka(int maka){
        if(maka>50){
                cout<<"\nYou cannot request more than 50 kg"<<endl;
        }else{
            this->maka=maka;
            cout<<"you have collected Maka of "<<maka<<" kg";
            cout<<"\nyou can still get maka of qty "<<50-maka<<" kg";
        }
    }
    void getJwari(int jwari){
        if(jwari>40.5){
            cout<<"\nYou cannot request more than 40.5 kg"<<endl;
        }else{ 
            this->jwari=jwari;
            cout<<"you have collected jwari of "<<jwari<<" kg";
            cout<<"\nyou can still get jwari of qty "<<40.5-jwari<<" kg";
            
        }
        
    }
    void getTandul(int tandul){
        if(tandul>10){
            cout<<"\nYou cannot request more than 10 kg"<<endl;
        }
        else{
            cout<<"you have collected tandul of "<<tandul<<" kg";
            cout<<"\nyou can still get tandul of qty "<<10-tandul<<" kg";
        }
        
        
    }
    
    
};

int main()
{
    cout<<"Welcome to XYZ rationDukan\n";
    int d;

    do
    {
    cout<<"\n1. enter option for maka\n2. enter option for jwari \n3. enter option for tandul\n4. exit\n==>";
    cin>>d;
    RationDukan r1;
    switch(d){
        case 1:
           int maka1;
           cout<<"enter maka in kg:";
           cin>>maka1;
           r1.getMaka(maka1);
           break;
        case 2:
           float jwari1;
           cout<<"enter jwari in kg:";
           cin>>jwari1;
           r1.getJwari(jwari1);
           break;
        case 3:
           int tandul1;
           cout<<"enter tandul in kg:";
           cin>>tandul1;
           r1.getTandul(tandul1);
           break;
        
    }
    }while(d!=4);
    
    return 0;
}


