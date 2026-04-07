#include <iostream>
using namespace std;

int main()
{
    int n, choice, index,m;
    cout << "enter n:";
    cin >> n;

    int *arr = new int[n];
    int *temp;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element:";
        cin >> *(arr + i);
    }

    cout << "if you want to add new number write 1:";
    cin >> choice;

    if (choice)
    {
       temp=new int[n+1];
       for (int i = 0; i < n; i++)
        {
           *(temp+i)=*(arr+i);
        }
        cout<<"enter the value:";
        cin>>m;
        *(temp+n)=m;
        for (int i = 0; i < n+1; i++)
        {
            cout << temp[i] << " ";
        }
        cout<<endl;
        n++;
        delete[] arr;
    }

    cout<<"if you want to delete write 1:";
    cin>>choice;
    if(choice)
    {
    cout<<"enter index:";
    cin>>index;
    for(int i=0;i<n;i++)
    {
    if(i>=index)
    {
    *(temp+i)=*(temp+i+1);
    }
    }
    n--;
    for(int i=0;i<n;i++)
    {
    cout<<temp[i]<<" ";
    }
    }

    delete[] temp;
    return 0;
}
