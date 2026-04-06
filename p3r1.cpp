

#include<iostream>
using namespace std;

class employee
{
private:
    string name;
    double salary;
    double tsalary=0;

public:
    inline int totalsalary(int b=2000)
    {
    return (b+salary);
    }

    employee(string n,double s)
    {
    name=n;
    salary=s;
    }
};

int main()
{
employee e("miral",10000);
employee e1("maitry",20000);
cout<<"total salary:"<<e.totalsalary()<<endl;
cout<<"total salary:"<<e1.totalsalary(4000);
return 0;
}
