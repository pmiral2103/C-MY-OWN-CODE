#include<iostream>
using namespace std;
class shape
{
float radius;
public:
void getdata()
{
cout<<"enter radius:";
cin>>radius;
}
int radius1()
{
return radius;
}
};

class circle:private shape
{
public:
void get()
{
getdata();
}
int area()
{
return (3.14*radius1()*radius1());
}
};

int main()
{
int n;
cout<<"enter n:";
cin>>n;

circle *r = new circle[n];

for(int i=0;i<n;i++)
{
r[i].get();
}

for(int i=0;i<n;i++)
{
cout<<"area:"<<r[i].area()<<endl;
}

delete[] r;
return 0;
}
