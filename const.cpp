#include<iostream>
using namespace std;
class myclass{
    private:
    string name,email,address;
    int age;
    long mobile;
    public:
    myclass(string names, string emails , string addresss , int ages, long mobiles){       
      name = name;
      email = email;
      address = address;
      age = age;
      mobile = mobile;
        cout<<"your name is "<<names<<endl;
        cout<<"your age is "<<ages<<endl;
        cout<<"your mobile number is "<<mobiles<<endl;
        cout<<"your email is "<<emails<<endl;
        cout<<"your address is "<<addresss<<endl;
    }
};


int main(){
    myclass obj("vaibhav","@shar","jaipur",20,346789);
    return 0;
}