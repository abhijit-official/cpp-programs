
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void display(vector<int> a){
    cout<<"your current list is:";
    for (auto i:a) {
        /* code */
        cout<<i<<"\t";
    }
    cout<<"\n";
}
int main()
{
    char p ='n';
    vector<int> list;
    cout<<"welcome\n";
    do{
        int ch;
        cout<<"1. add item\n2. exit\n";
        cin>>ch;
        switch(ch){
            case 1:
                int item;
                cout<<"enter item:";
                cin>>item;
                list.push_back(item);
                display(list);
                break;
            case 2:
                p='e';
                break;
            default:
                cout<<"Enter right choice:\n";
        };
    }while(p!='e');

    return 0;
}
