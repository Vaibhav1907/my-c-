          #include <iostream>
          using namespace std;
          string switchCase(){
            char getvalue;
            cin>>getvalue;
            switch (getvalue){
            case 'a':
            return "true";
            break;
            case 'e':
            return "true";
           break;
            case 'i':
           return "true";
            break;
            case 'o':
            return "true";
            break;
            case 'u':
            return "true";
            break;
    
            default:
            return "false";
         }

         }
          int main(){
  
	       string a =   switchCase();
            
            cout<<a;
         
            }


  