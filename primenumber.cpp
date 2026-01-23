//medium level logic of this code
//#include<iostream>
//using namespace std;
//int main()
//{
//int n;
//cout<<"enter n:";
//cin>>n;
//
//for(int i=2;i<=n;i++)
//{
//int flag=0;
//for(int j=2;j<i;j++)
//{
//if(i%j==0)
//{
//flag=1;
//}
//}
//if(flag==0)
//{
//cout<<i<<endl;
//}
//}
//return 0;
//}



//DSA LEVEL LOGIC OF THIS code

#include<iostream>
using namespace std;

int prime(int i)
{
for(int j=2;j*j<=i;j++)
{
if(i%j==0)
{
return 0;
}
}
return 1;
}

int main()
{
int n;
cout<<"enter n:";
cin>>n;

for(int i=2;i<=n;i++)
{
if(prime(i))
{
cout<<i<<endl;
}
}

return 0;
}
