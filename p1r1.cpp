#include<iostream>
using namespace std;

class wallet
{
    int id;
    string name;
    float balance;

public:
    wallet(int Id,string Name,float Balance=0)
    {
        id =Id;
        name=Name;
        balance=Balance;
    }

    void display(wallet people)
    {
        cout<<"your total balance:"<<people.balance<<endl;
    }

    void transfer(wallet reciver,int amount)
    {
        if(amount<=0 || amount>balance)
        {
            cout<<"insufficient balance"<<endl;
        }
        else
        {
            balance=balance-amount;
            reciver.balance+=amount;
            cout<<"suceesfully"<<endl;

        }
    }

    void loadmoney(int amount)
    {
        if(amount<=0)
        {
            cout<<"not valid"<<endl;
        }
        else
        {
            balance=balance+amount;
            cout<<"suceesfully"<<endl;
        }
    }
};

int main()
{
    wallet  w(1,"miral",4000);
    wallet w2(2,"maitry",7000);
    cout<<"---intial amount of your account---"<<endl;
    w.display(w);
    cout<<endl;
    int amount;
    cout<<"enter amount for transfer:";
    cin>>amount;
    cout<<endl<<"---after transfer your final amount---"<<endl;
    w.transfer(w2,amount);
    w.display(w);
    w.display(w2);
    cout<<endl<<"enter amount for add money in your account:";
    cin>>amount;
    cout<<endl;
    cout<<"---after add money your final amount---"<<endl;
    w.loadmoney(amount);
    w.display(w);
    return 0;
}

