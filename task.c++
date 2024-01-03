#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    if(marks<34){
        cout<<"you got f";
    }
    else if(marks<=40){
        cout<<"you got e";
    }
    else if(marks<=70){
        cout<<"you got c";
    }
    else if(marks<=80){
        cout<<"you got b";
    }
    else if (marks <=100){
        cout<<"you got a";
    }
    else{
        cout<<"you are fail ";
    }
}