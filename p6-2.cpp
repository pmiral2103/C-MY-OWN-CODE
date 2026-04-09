#include<iostream>
using namespace std;

class person
{
    string name;
    int age;
public:
    person(string n,int a)
    {
        name=n;
        age=a;
    }
    void put2()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};

class employee:private person
{
    int id;
public:
    employee(string n,int a,int i):person(n,a)
    {
        id=i;
    }
    void put1()
    {
        put2();
        cout<<"id:"<<id<<endl;
    }
};

class manager:private employee
{
    string department;
public:
    manager(string n,int a,int i,string d):employee(n,a,i)
    {
        department=d;
    }
    void put()
    {
        put1();
        cout<<"department:"<<department<<endl<<endl;
    }
};

int main()
{
    manager m1("miral",19,123,"ce");
    manager m2("maitry",19,133,"ce");
    m1.put();
    m2.put();
    return 0;
}
