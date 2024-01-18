#include <iostream>
using namespace std;

class addMoney{
    public:
    int mymoney;
    void money(){
        cout<<"enter your money";
        cin>>mymoney;

    }

};

class myclass2:public addMoney{
    public:
    int withdrow_money,afterMoney;
    void withdrow(){
        cout<<"enter your withdrow_money";
        cin>>withdrow_money;
        if(withdrow_money>=mymoney){
            cout<<"sorry";
        }else{
            afterMoney = mymoney-withdrow_money;
            cout<<"withdrow money "<<withdrow_money<<endl;
            cout<<"after withdrow "<<afterMoney<<endl;
        }
        
    }



};


int main(){
    myclass2 myobj2;
    myobj2.money();
    myobj2.withdrow();
    return 0;
}
