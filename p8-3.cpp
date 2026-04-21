#include<iostream>
using namespace std;
class invalidamount {};
class bank
{
    double balance;
public:
    bank(double b)
    {
        balance=b;
    }
    bank()
    {
        balance=0;
    }

    void withdraw(double amount)
    {
        if(amount<0 || amount>balance)
        {
            throw invalidamount();
        }
        balance-=amount;
        cout<<"balance: "<<balance<<endl;
    }


    void deposite(float amount)
    {
        if(amount<0)
        {
            throw invalidamount();
        }
        balance+=amount;
        cout<<"balance:"<<balance<<endl;
    }

};

int main()
{
    try
    {
        bank b(3500);
        b.withdraw(100);
        b.deposite(-800);
    }
    catch(invalidamount)
    {
        cout<<"insufficient amount"<<endl;
    }
    return 0;
}
