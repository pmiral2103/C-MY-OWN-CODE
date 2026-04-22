#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,x;
vector<int> v;
cout<<"Enter n:";
cin>>n;

for(int i=0;i<n;i++)
{
cout<<"enter the value:";
cin>>x;
v.push_back(x);
}

//method of reverse std
reverse(v.begin(),v.end());
for(int i=0;i<n;i++)
{
cout<<"value: "<<v[i]<<" ";
}
cout<<endl;
//method of itrention
auto start=v.begin();
auto end=v.end()-1;
while(start<end)
{
swap(*start,*end);
start++;
end--;
}
for(int i=0;i<n;i++)
{
cout<<"value: "<<v[i]<<" ";
}
return 0;
}
