

#include<iostream>
using namespace std;

int recursive(int arr[],int n)
{
if(n==-1) return 0;
else return(arr[n]+recursive(arr,n-1));
}

int interative(int arr[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+arr[i];
}
return sum;
}
int main()
{
int n;
cout<<"enter a size:";
cin>>n;

int *arr=new int[n];

for(int i=0;i<n;i++)
{
cin>>arr[i];
}

cout<<"recursive:"<<recursive(arr,n)<<endl;
cout<<"interative:"<<interative(arr,n)<<endl;

delete[] arr;

return 0;
}
