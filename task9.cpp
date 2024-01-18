#include<iostream>
using namespace std;

class first{
    public:
    int amount,myplan,afterRecharge;
    string name,sim,mobileNumber;
    void  userinformatio(){
        cout<<"enter the name";
        cin>>name;
        cout<<"enter the amount";
        cin>>amount;
       
}
    void choseSim(){
        cout<<"chose your sim airtal/vi/jio";
        cin>>sim;
    }
};


class second: public first{
    public:
    void mobileRecharge(){
        cout<<"enter your mobile number :";
        cin>>mobileNumber;
        while(mobileNumber.size()!=10){
            cout<<"minimum 10 digit require :";
            cin>>mobileNumber;
        }
        // cout<<mobileNumber<<endl;
    }
    
};

class third : public second{
    public:
    void plan(){
        cout<<"your plan is 259/599/1199 :";
        cin>>myplan;
        if(myplan>amount){
            cout<<"insuffecient amount"<<endl;
        }else{
            afterRecharge = amount-myplan;
            cout<<"your plan succesfull"<<endl;
            cout<<"after recharge your balance is"<<afterRecharge<<endl;
        }
    }
    
};



int main(){
    third person;
    person.userinformatio();
    person.choseSim();
    person.mobileRecharge();
    person.plan();
}


