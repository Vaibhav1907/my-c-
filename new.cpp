// #include <iostream>

// using namespace std;

// int main(){
//     int sum = 0;
//     for (int i = 1; i <=100; i++)
//     {
//         sum+=i;
//     }
//     cout<<sum;
    
// }


// ---------------------------------- while loop-------------------------------------------------------------------------------------
// #include <iostream>

// using namespace std;

// int main(){
//     int i = 0;
//     while (i<=100){
//         i++;
//         cout<<i<<" ";

//     }
    
    
// }


// ---------------------
// #include <iostream>

// using namespace std;

// int main(){
//     int i;
//     cout<<"enter your number";
//     cin>>i;
//     while (i<0){
//         cout<<"enter again number";
//         cin>>i;

//     }
//     cout<<i;
    
    
// }

// --------------------******************** star Pattern
// #include <iostream>

// using namespace std;

// int main(){
//     string str;
//     for (int i = 1; i <=5; i++)
//     {
//         str+='*';
//         cout<<str<<endl;
//     }

    
// }



// #include <iostream>

// using namespace std;

// int main(){
//     string str;
//     for (int i = 1; i <=5; i++)
//     {
//         for (int j = 1; j <=5-i; j++)
//         {
//             str+="*";
//         }
//         cout<<str<<endl;
//         str = "";
        
//     }
    

    
// }

// ------------------------------

// #include <iostream>

// using namespace std;

// int main(){
//     for (int i = 1; i <=5; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//             cout<<endl;
        
        
//     }
//     for (int k = 1; k <=5; k++)
//     {
//         for (int l = 5; l>k; l--)
//         {
//             cout<<"*";
//         }
//             cout<<endl;
        
        
//     }
    

    
// }


// -------------------------*********** Task

#include <iostream>

using namespace std;

int main(){
    int range;
    cout<<"enter your range";
    cin>>range;
    string arr[range][3];
    string arr2[2] = {"enter your name :","enter your car number :"};
    string str[3] = {"your name is :","your car number is:","your id is :"};

    for(int i= 0; i<range;++i){
        for(int j = 0; j<2;++j){
            cout<<arr2[j];
            cin>>arr[i][j];


        }
        arr[i][2] = to_string(i+1);

    }

    for(int i= 0; i<range;++i){
        for(int j = 0; j<3;++j){
            cout<<str[j]<<arr[i][j]<<endl;
        }

    }
}