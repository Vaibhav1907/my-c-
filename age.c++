#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible for voting\t"<<age;
    }
    else if(age==100){
        cout<<"your expiry is soon"<<age;
    }
    else{
        cout<<"you are not  eligible for voting \t";
    }
}