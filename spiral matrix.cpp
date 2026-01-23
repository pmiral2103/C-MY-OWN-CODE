#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,m,c=1;

cout<<"enter n:";
cin>>n;

cout<<"enter m:";
cin>>m;

vector<vector<int>> spiral(n,vector<int> (m));

int left=0;
int right=m-1;
int top=0;
int bottom=n-1;

while(top<=bottom && left<=right)
{
for(int i=left;i<=right;i++)
{
spiral[top][i]=c++;
}
top++;

for(int i=top;i<=bottom;i++)
{
spiral[i][right]=c++;
}
right--;

if(top<=bottom){
for(int i=right;i>=left;i--)
{
spiral[bottom][i]=c++;
}
bottom--;}

if(left<=right){
for(int i=bottom;i>=top;i--)
{
spiral[i][left]=c++;
}
left++;
}}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<spiral[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
