#include<iostream>
#include<cmath>
using namespace std;
class farenhit;
class celsisus
{
    float temp;
public:
    celsisus()
    {
        temp=0;
    }
    celsisus(float t)
    {
        temp=t;
    }
    operator farenhit();
    float getTemp()
    {
        return temp;
    }
};

class farenhit
{
    float temp;
public:
    farenhit()
    {
        temp=0;
    }
    farenhit(float t)
    {
        temp=t;
    }
    operator celsisus()
    {
        float c=((temp-32)*5)/9;
        return celsisus(c);
    }
    float getTemp()
    {
        return temp;
    }
};
celsisus::operator farenhit()
{
    float f=(9*temp)/5+32;
    return farenhit(f);
}
bool operator==(celsisus c,farenhit f)
{
    float fa=(9*c.getTemp())/5+32;
    return(fabs(fa-f.getTemp())<0.01);
}

int main()
{
    celsisus c1(32);
    farenhit f1;
    f1=c1;

    celsisus c2;
    farenhit f2(98.6);
    c2=f2;

    if(c1==f1)
    {
        cout<<"temprature are equal"<<endl;
    }
    else
    {
        cout<<"not equal"<<endl;
    }
    return 0;
}
