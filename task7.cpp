#include<iostream>
using namespace std;
class employee{
    public:
    long name,age,mobile,email,address;
    void myemployee(){
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your age";
        cin>>age;
        cout<<"enter your mobile";
        cin>>mobile;

        cout<<"enter your email";
        cin>>email;
        cout<<"enter your address";
        cin>>address;

        
        cout<<"your name is"<<name<<endl;
        cout<<"your age is"<<age<<endl;
        cout<<"your mobile number"<<mobile<<endl;
        cout<<"your email is"<<email<<endl;
        cout<<"your address is"<<address<<endl;

    }
    
};

int main(){
    employee myobj;
    myobj.myemployee();
    myobj.myemployee();
    myobj.myemployee();
    myobj.myemployee();


}