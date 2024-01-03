#include <iostream>
using namespace std;
int main() {
    float arr[6]={};
    cout << "Enter your science marks : ";
    cin >>arr[0];

    cout << "Enter your sst marks : ";
    cin >> arr[1];

    cout << "Enter your sanskrit marks : ";
    cin>>arr[2];
     
    cout << "Enter your computer marks : ";
    cin >> arr[3];

    cout << "Enter your english marks : ";
    cin >> arr[4];
    
    float totalMarks = arr[0] + arr[1] + arr[2]+ arr[3]+arr[4];

    cout << "Your Total Marks is : " << totalMarks << endl;
     float pers = (totalMarks / 500) * 100;

    cout << "Your Total Percentage is : " << pers << endl;



      
 }
    





