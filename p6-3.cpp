
#include<iostream>
using namespace std;

class fuel
{
protected:
    string type;
public:
    fuel(string t)
    {
        type=t;
    }
};

class brand
{
protected:
    string modelname;
public:
    brand(string m)
    {
        modelname=m;
    }
};

class car:public brand,public fuel
{
public:
    car(string m,string t):brand(m),fuel(t) {}
    void put()
    {
        cout<<"fuel type:"<<type<<endl;
        cout<<"model name:"<<modelname<<endl;
    }
};

int main()
{
    car c("kia","diesal");
    c.put();
    return 0;
}
