#include <bits/stdc++.h>

using namespace std;

// /* --------------------------
// 1
// 22
// 333
// 4444
// 55555
// */

 int myfun1(){
         int row = 5;
              for(int i=1; i<=row; i++){
       for(int j=0; j<i; j++){
           cout<<i;
       }
         cout<<endl;

    }

 }


// // /* ---------------------
// // 12345
// // 1234
// // 123
// // 12
// // 1

// // */


 int myfun2(){
    for(int i=0; i<5; i++){
        for(int j=1; j<=5-i; j++){
            cout<<j;
       }
        cout<<endl;
    }

 }


// // /* ---------------------------------
// // *****
// // ****
// // ***
// // **
// // *


// // */


int myfun3(){
   for(int i=0; i<5; i++){
      for(int j=0;j<5-i; j++){
          cout<<"*";
       }
       cout<<endl;
   }

 }




// // /* ------------------------------
// // 54321
// // 4321
// // 321
// // 21
// // 1

// // */


 int myfun4(){
   for(int i=0; i<5; i++){
       for(int j=5-i; j>0; j--){
           cout<<j;
       }
       cout<<endl;
    }

 }
//  --------------------------------

int myfun5(int row, int column){
    for(int i = 1; i<=row; i++){
        for(int j=1; j<=column; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



// ------------------------

int myfun6(int row){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



int main(){
   myfun1();
   cout<<endl;
   myfun2();
   cout<<endl;
   myfun3();
   cout<<endl;
   myfun4();
   cout<<endl;
    myfun5(5,4);
    cout<<endl;
    myfun6(7);

}
