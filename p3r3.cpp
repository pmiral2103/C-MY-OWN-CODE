


#include<iostream>
using namespace std;

class account
{
private:
    string name;
    int number;
    double balance;
    static int totalaccount;

public:
    account()
    {
        name="no";
        number=0;
        balance=0;

    }

    account(string na,int n,double b)
    {
        name=na;
        number=n;
        balance=b;

    }

    int deposite(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            return 1;
        }

            return 0;

    }

    int withdraw(double amount)
    {
        if(amount<=balance && amount>0)
        {
            balance-=amount;
            return 1;
        }

            return 0;

    }

    int transfer(account &recvier,double amount)
    {
        if(amount<=balance)
        {
            recvier.balance+=amount;
            balance-=amount;
            return 1;
        }

            return 0;

    }
        static int gettotalaccount()
        {
            return totalaccount;
        }


    void getdata()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter number:";
        cin>>number;
        cout<<"enter balance:";
        cin>>balance;
        totalaccount++;
    }

    void putdata()
    {
        cout<<"name:"<<name<<endl;
        cout<<"number:"<<number<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};

int account::totalaccount=0;

int main()
{
    int n,m,k;
    cout<<"enter n:";
    cin>>n;

    account *a=new account[n];

    for(int i=0; i<n; i++)
    {
        a[i].getdata();
    }

    cout<<"enter index:";
    cin>>m;
    a[m].deposite(200);

    cout<<"enter index:";
    cin>>m;
    a[m].withdraw(200);

    cout<<"enter index:";
    cin>>m;
    cout<<"enter index:";
    cin>>k;
    a[m].transfer(a[k],300);

    for(int i=0; i<n; i++)
    {
        a[i].putdata();
    }

    cout<<"total account:"<<account::gettotalaccount()<<endl;
    delete[] a;
    return 0;
}
