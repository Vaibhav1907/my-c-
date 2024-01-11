// technique to store data in object notation
#include<iostream>
using namespace std;
// class firstclass{
//     public:
//     int a;



// };
// int main(){
//   firstclass obj;
// //   firstclass object2;
//   obj.a=10;
//   cout<<obj.a;

//   return 0;


// }

class firstname{
    public:
    int a;
   void datatype(){
    cout<<"this is my name";
   }
};
int main(){
    firstname obj;
    obj.a=15;
    cout<<obj.a;
     firstname obj2;
     obj2.a=20;
     cout<<obj2.a;
     obj2.datatype();
     return 0;

}