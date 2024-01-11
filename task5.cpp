#include <bits/stdc++.h>

using namespace std;



int percentage()
{
    string name;
    cout << "enter your name ";
    cin >> name;
    float arr[5] = {};
    float total;
    float per;
    cout << "write hindi marks ";
    cin >> arr[0];
    cout << "write english marks ";
    cin >> arr[1];
    cout << "write scc marks ";
    cin >> arr[2];
    cout << "write science marks ";
    cin >> arr[3];
    cout << "write math marks ";
    cin >> arr[4];
    total = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    per = (total / 500) * 100;
    return per;
}



string grade()
{
    int Marks;
    cout << "enter your marks";
    cin >> Marks;
    if (Marks < 34)
    {
        return "you are fail";
    }
    else if (Marks <= 45)
    {
        return "Your Grade is E";
    }
    else if (Marks <= 60)
    {
        return "Your Grade is D";
    }
    else if (Marks <= 75)
    {
        return "Your Grade is C";
    }
    else if (Marks <= 80)
    {
        return "Your Grade is B";
    }
    else if (Marks <= 100)
    {
        return "Your Grade is A";
    }
    else
    {
        return "sorry";
    }
}


int main(){
   
    
    string mygrade = grade();
    cout<<mygrade<<endl;

    int getPercentage = percentage();
    cout << getPercentage << '%' << endl;

}