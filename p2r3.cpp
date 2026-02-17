#include<iostream>
using namespace std;
int i=0;
class bank
{
    int id;
    string name;
    double balance;

public:
    void newaccount()
    {
        id=i+1;
        cout<<"enter name:";
        cin.ignore();
        getline(cin,name);
        cout<<"enter balance:";
        cin>>balance;
    }
    void deposit()
    {
        double amount;
        cout<<"enter your deposit amount:";
        cin>>amount;
        balance=balance+amount;
        cout<<"successfully!!"<<endl;
        cout<<"your final balance:"<<balance<<endl;
    }
    void withdrawmoney()
    {

        double amount;
        cout<<"enter your withdraw amount:";
        cin>>amount;
        if(balance>=amount)
        {
        balance=balance-amount;
        cout<<"successfully!!"<<endl;
        cout<<"your final balance:"<<balance<<endl;
        }
    }
    void display()
    {
        cout<<"account id:"<<i+1<<endl;
        cout<<"name is "<<name<<endl;
        cout<<"your balance:"<<balance<<endl;
    }

    bank()
    {
        name="dafault name";
        balance=0;
    }
};

int main()
{
    int n;
    bank b[1000];
    cout<<"1 for newaccount"<<endl;
    cout<<"2 for deposite money"<<endl;
    cout<<"3 for withdraw money"<<endl;
    cout<<"4 for display account histroy"<<endl;
    cout<<"0 for exit"<<endl;

    while(1)
    {
        cout<<"enter your choice number:";
        cin>>n;
        switch(n)
        {
        case 1:
            b[i].newaccount();
            i++;
            break;
        case 2:
            cout<<"enter your bank id:";
            cin>>i;
            b[i].deposit();
            break;
        case 3:
            cout<<"enter your bank id:";
            cin>>i;
            b[i].withdrawmoney();
            break;
        case 4:
            cout<<"enter your bank id:";
            cin>>i;
            b[i].display();
            break;
        case 0:
            cout<<"thank u"<<endl;
            return 1;
        }
    }
}
