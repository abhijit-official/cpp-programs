
#include <iostream>

using namespace std;

int add(int x, int y){
    
    return x+y;
}

double add(double x, double y){
    
    return x+y;
}

int main()
{
    cout<<"int add :"<<add(22,33);
    cout<<"\ndouble add :"<<add(33.3,44.4)<<endl;

    return 0;
}