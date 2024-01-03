#include<iostream>

using namespace std;
int main(){
    int input;
    cin>>input;
    switch(input){
        case 1:
            cout<<"sunday";
            break;
        case 2:
            cout<<"monday";
            break;
        case 3:
            cout<<"tuesday";
            break;
        case 4:
            cout<<"wednesday";
            break;
        case 5:
            cout<<"thrusday";
            break;
        default:
            cout<<"invalid input";
            break;


    }
    return 0;
}