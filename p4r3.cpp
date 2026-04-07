#include<iostream>
using namespace std;
int main()
{
int n,m;

cout<<"enter n:";
cin>>n;
int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element:";
        cin >> *(arr + i);
    }

cout<<"enter m:";
cin>>m;
int *arr1 = new int[m];

    for (int i = 0; i < m; i++)
    {
        cout << "enter the element:";
        cin >> *(arr1 + i);
    }

int *farr=new int[m+n];
for (int i = 0; i < n; i++)
    {
       *(farr+i)=*(arr+i);
    }
for (int i = 0; i < m; i++)
    {
       *(farr+n+i)=*(arr1+i);
    }


for(int i=0;i<n+m;i++)
{
for(int j=i+1;j<n+m;j++)
{
if(*(farr+i)>*(farr+j))
{
int temp=*(farr+i);
*(farr+i)=*(farr+j);
*(farr+j)=temp;
}
}
}

for(int i=0;i<n+m;i++)
{
cout<<*(farr+i)<<" ";
}

delete[] arr;
delete[] farr;
delete[] arr1;
return 0;
}
