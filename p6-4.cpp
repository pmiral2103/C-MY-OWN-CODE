#include<iostream>
using namespace std;

class Account
{
protected:
    int id;
    double balance;
public:
    Account(int i,double b)
    {
        id=i;
        balance=b;
    }
    Account()
    {
        id=0;
        balance=0;
    }
    virtual ~Account()
    {
        cout << "Account Destructor\n";
    }
    void deposite(double amount)
    {
        balance+=amount;
    }
    virtual void withdraw(double amount)
    {
        if(amount < 0 || amount > balance)
        {
            cout << "Invalid amount" << endl;
        }
        else
        {
            balance -= amount;
        }
    }
    virtual void display()
    {
        cout<<"id: "<<id<<endl;
        cout<<"balance: "<<balance<<endl;
    }

};

class saving:public Account
{
    double interest;
public:
    saving(int i,double b,double in):Account(i,b)
    {
        interest=in;
    }
    saving() : Account(0,0)
    {
        interest = 5;
    }
    void display() override
    {
        Account::display();
        cout<<"interest: "<<interest<<endl;
    }

    void tbalance()
    {
        balance+=(balance*interest)/100;

    }
};

class current:public Account
{
    double overdraftLimit;
public:
    current(int accNo, double bal, double limit): Account(accNo, bal)
    {
        overdraftLimit = limit;
    }
    void display() override
    {
        Account::display();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
    void withdraw(double amount) override
    {
        if(amount < 0 || amount > (balance + overdraftLimit))
        {
            cout << "Invalid amount" << endl;
        }
        else
        {
            balance -= amount;
        }
    }
};

int main()
{
    saving s(101, 1000, 5);
    current c(102, 500, 1000);

    s.deposite(200);
    s.withdraw(150);
    c.deposite(300);
    c.withdraw(1200);
    s.tbalance();
    s.display();
    c.display();
    return 0;
}
