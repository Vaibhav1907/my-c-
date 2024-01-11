#include<iostream>
using namespace std;
 int parking(int car_input){
  // int car_input;
   int  count;

  // cout<<"Enter how much cars you have to park = ";
  //  cin>>car_input;

   for(int id = 1; id<= car_input; id++){
     string arr[3] = {};
        
        
      cout<<"enter the user_name = ";
      cin>>arr[0];
       
       cout<<"enter the car number = ";
      cin>>arr[1]; 
      count =  id;


       
        
        


        cout<<"your name is = "<<arr[0]<<endl;
        cout<<"your car name is = "<<arr[1]<<endl;
        cout<<"your car id is = "<<arr[2]<< count <<endl;


 }   



 }


 int main(){
  int car_input;
  cout<<"Enter how much cars you have to park = ";
  cin>>car_input;
  parking(car_input);


 }

