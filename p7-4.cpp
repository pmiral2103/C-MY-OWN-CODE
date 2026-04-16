#include<iostream>
using namespace std;

class shape
{
public:
    virtual float area()=0;
};

class rectangle:public shape
{
    float l;
    float b;
public:
    rectangle(float sl,float sb)
    {
        l=sl;
        b=sb;
    }
    float area()
    {
        return l*b;
    }
};

class circle:public shape
{
    float r;
public:
    circle(float cr)
    {
        r=cr;
    }
    float area()
    {
        return 3.14*r*r;
    }
};

int main()
{
    shape *s[2];
    s[0]=new rectangle(10,20);
    s[1]=new circle(5);

    for(int i=0; i<2; i++)
    {
        cout<<"answer: "<<s[i]->area()<<endl;
    }
    return 0;
}
