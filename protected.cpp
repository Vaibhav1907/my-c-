#include <iostream>
using namespace std;
class parentclass{
  protected:
  int a=10;

};
class childclass:protected  parentclass{
  public:
  void myfun(){
    cout<<a;
  }
};

int main() {
   childclass myobj;
  myobj.myfun()
 
}
