#include<iostream>
using namespace std;
int main()
{
int n,k,sum=0,fsum=0;
cout<<"enter n:";
cin>>n;
cout<<"enter k:";
cin>>k;

while(n!=0)
{
int k=n%10;
sum+=k;
n=n/10;
}

sum=sum*k;

while(sum>=10)
{
while(sum!=0)
{
int f=sum%10;
fsum+=f;
sum=sum/10;
}
}

cout<<"answer:"<<fsum<<endl;
return 0;
}
