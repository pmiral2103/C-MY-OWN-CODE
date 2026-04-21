#include<iostream>
using namespace std;
int main()
{
    try
    {
        float a,b;
        cout<<"enter value of a:";

        if(!(cin >> a))
        {
            throw runtime_error("input are invalid");
        }
        cout<<"enter value of b:";

        if(!(cin >> b))
        {
            throw runtime_error("input are invalid");
        }
        if(b==0)
        {
            throw runtime_error("base never be 0");
        }
        float result=a/b;
        cout<<"answer:"<<result<<endl;
    }
    catch(const exception &e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}
