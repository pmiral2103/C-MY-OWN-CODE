#include<iostream>
using namespace std;
int main()
{
int n,rev=0
,m;
cout<<"enter n:";
cin>>n;

while(n>=0)
{
m=n%10;
rev=rev*10+m;
n=n/10;
}

cout<<"reverse number is:"<<rev;

return 0;
}
