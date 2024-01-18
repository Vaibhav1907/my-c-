#include<iostream>
using namespace std;
class amount{
    public:
    int myamount;
    string name,recharge,amount,userwish;
    // cout<<"enter the name";
    // cin>>name;
    // cout<<"enter the amount";
    // cin>>amount;
    mobileplains(){
        cout<<"enter the name";
        cin>>name;
        cout<<"enter the amount";
        cin>>amount;
        cout<<"you  want to recharge ";
       if(userwish=="yes"){
            this->mobileplains();
        }
        else{
            cout<<"ok"<<endl;
        }
        cout<<name<<endl;
        cout<<amount<<endl;
        cout<<recharge<<endl;
    
       


    }
};



