#include<iostream>
using namespace std;

class rectangle
{
    int l;
    int b;

public:
    void input()
    {
        int L,B;
        cout<<"enter l:";
        cin>>L;
        l=L;
        cout<<"enter b:";
        cin>>B;
        b=B;
    }
    void area()
    {
        int area=l*b;
        cout<<"area:"<<area<<endl;
    }
    void parameter()
    {
        int parameter=2*(l+b);
        cout<<"parameter:"<<parameter<<endl;
    }
    void change()
    {
    cout<<"enter new length:"<<endl;
    cin>>l;
    cout<<"enter new widhth:"<<endl;
    cin>>b;
    }
};

int main()
{
    int n;
    cout<<"how many data you enter:";
    cin>>n;

    rectangle area[n];

    cout<<"1 for data entry"<<endl;
    cout<<"2 for display area and parameter"<<endl;
    cout<<"3 for change value"<<endl;
    cout<<"0 for exit"<<endl;

    while(1)
    {
        int choice;
        cout<<"enter your choice:";
        cin>>choice;

        switch(choice)
        {
        case 1:
            for(int i=0; i<n; i++)
            {
                area[i].input();
            }
            break;
        case 2:
            for(int i=0; i<n; i++)
            {
                area[i].area();
                area[i].parameter();
            }
            break;
        case 3:
            int i;
            cout<<"which index value change:";
            cin>>i;
            area[i-1].change();
            break;
        case 0:
            return 1;
        }
    }
    return 0;
}
