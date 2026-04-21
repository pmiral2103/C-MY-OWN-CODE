#include<iostream>
#include<cmath>
using namespace std;

class NegativeNumberException {};
int main()
{
    float a;
    cout<<"enter value of a:";
    cin>>a;

    try
    {
        if(a<0)
        {
            throw NegativeNumberException();
        }

        cout<<"answer: "<<a*a<<endl;
    }

    catch(NegativeNumberException)
    {
        cout<<"Error:Negative Number"<<endl;
    }
    return 0;
}
