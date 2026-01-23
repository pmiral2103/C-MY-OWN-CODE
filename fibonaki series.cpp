//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//int n;
//cout<<"enter n:";
//cin>>n;
//
//vector<int> fibonaci(n);
//fibonaci[1]=fibonaci[0]=1;
//
//for(int i=2;i<n;i++)
//{
//fibonaci[i]=fibonaci[i-1]+fibonaci[i-2];
//}
//
//for(int i=0;i<n;i++)
//{
//cout<<fibonaci[i]<<endl;
//}
//
//return 0;
//}


//fibonaci series on dsa level

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    // Edge case
    if (n <= 0)
        return 0;

    int a = 0, b = 1;

    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

