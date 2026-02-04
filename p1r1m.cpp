#include<iostream>
using namespace std;

class wallet
{
    int id;
    string name;
    double balance;
public:

    wallet(int ID,string NAME,double BALANCE)
    {
        id=ID;
        name=NAME;
        balance=BALANCE;
    }
    void loadmoney(int money)
    {
        if (money <= 0)
        {
            cout << "Invalid Amount!\n";
            return;
        }
        balance += money;
        cout << "Money Added Successfully!\n";
    }
    void trasferringmoney(wallet anotheruser,int money)
    {
        if (money <= 0 || money > balance)
        {
            cout << "Insufficient Balance!\n";
            return;
        }
        balance -= money;
        anotheruser.balance += money;
        cout << "Transfer Successful!\n";
    }
    void print()
    {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Balance: " << balance << endl;
    }
};

int main()
{
    wallet w[50];
    int user=1,money;
    cout<<"1 for create new bank account\n";
    cout<<"2 for loadmoney\n";
    cout<<"3 for trasfer money\n";
    cout<<"4 for display wallet\n";
    cout<<"0 for exit\n";

    while(1)
    {
        int choice,id,rid;
        string name;
        double balance;
        cout<<"ENTER CHOICE:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            id=user;
            cout<<"enter name:";
            cin>>name;
            cout<<"enter balance:";
            cin>>balance;
            w[user]=wallet(id,name,balance);
            user++;
            break;
        case 2:
            cout<<"id:";
            cin>>id;
            cout<<"enter amount:";
            cin>>money;
            w[id].loadmoney(money);
            break;
        case 3:
            cout<<"user id:";
            cin>>id;
            cout<<"enter reciever id:";
            cin>>rid;
            cout<<"enter amount:";
            cin>>money;
            w[id].trasferringmoney(w[rid],money);
            break;
        case 4:
            cout<<"enter id:";
            cin>>id;
            w[id].print();
            break;
        case 0:
            return 1;
        }
    }
    return 0;
}
