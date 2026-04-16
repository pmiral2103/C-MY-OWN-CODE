#include<iostream>
using namespace std;

class complex
{
    int real;
    int imagnary;
public:
    complex(int a,int b)
    {
        real=a;
        imagnary=b;
    }
    complex()
    {
    real=0;
    imagnary=0;
    }
    complex operator+(complex a)
    {
        complex temp;
        temp.real=a.real+real;
        temp.imagnary=a.imagnary+imagnary;
        return temp;
    }
    complex operator-(complex a)
    {
        complex temp;
        temp.real=real-a.real;
        temp.imagnary=imagnary-a.imagnary;
        return temp;
    }
    void display()
    {
        if(imagnary>0)
        {


        cout<<"answer: "<<real<<"+ "<<imagnary<<"i"<<endl;
        }
        else
        {
          cout<<"answer: "<<real<<imagnary<<"i"<<endl;
        }
    }
};
int main()
{
    complex c1(10,7);
    complex c2(15,6);

    complex sum = c1 + c2;
    complex diff = c1 - c2;
    sum.display();
    diff.display();
    return 0;
}
