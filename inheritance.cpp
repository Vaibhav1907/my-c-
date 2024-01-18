#include<iostream>
using namespace std;
class Circle{
    private:
     float radious;
     float area;

     public:
     void getradious(){
        cout<<"enter the number\n";
        cin>>radious;
     }
     void findarea(){
        area= 3.14*radious*radious;
        cout<<"area of circle "<<area;
     }
    


};
int main(){
    Circle cir;
    cir.getradious();
    cir.findarea();
}
