#include<iostream>
using namespace std;

template<typename t>
t max(t arr[],int n)
{
    t max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

template <typename t>
void reverse(t arr[],int n)
{
    for(int i=0; i<n/2; i++)
    {
        t temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int a[5]= {1,2,4,5,3};
    float b[5]= {1.2,3.4,7.8,7.2,4.7};
    char c[5]= {'a','b','k','d','e'};

    cout<<"in int max:"<<max<int>(a,5)<<endl;
    cout<<"in int reverse:";
    reverse<int>(a,5);
    cout<<endl;

    cout<<"in float max:"<<max<float>(b,5)<<endl;
    cout<<"in float reverse:";
    reverse<float>(b,5);
    cout<<endl;

    cout<<"in char max:"<<max<char>(c,5)<<endl;
    cout<<"in char reverse:";
    reverse<char>(c,5);
    cout<<endl;
}
