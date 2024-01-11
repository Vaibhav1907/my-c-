#include<iostream>
using namespace std;
int marks(){
     float science, sst, sanskrit, computer, english, totalMarks;
    cout << "Enter your science marks : ";
    cin >>science ;

    cout << "Enter your sst marks : ";
    cin >> sst;

    cout << "Enter your sanskrit marks : ";
    cin>>sanskrit;
     
    cout << "Enter your computer marks : ";
    cin >> computer;

    cout << "Enter your english marks : ";
    cin >> english;
    
    totalMarks = science + sst + sanskrit + computer + english;

    cout << "Your Total Marks is : " << totalMarks << endl;

    float pers =   totalMarks / 500 * 100;

    cout << "Your Total Percentage is : " << pers << endl;
}
int main(){
    marks();
}