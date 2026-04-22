#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,x;
    set<int> s;
    cout<<"enter value of n:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"enter value:";
        cin>>x;
        s.insert(x);
    }

    for(auto i=s.begin(); i!=s.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
