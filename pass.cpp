#include<iostream>
using namespace std;
string myfun(){
    return "something";
}
int main(){
    string data=myfun();
    if(data=="something"){
    cout<<"yes";

    }
  else{
  cout<<"no";

  }
}