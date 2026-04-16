#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

class bank
{

    string name;
    double amount;
    float rate;
    int time;
    double emi;

public:
    int id;
    bank(int ID,string NAME,double AMOUNT,float RATE,int TIME,int EMI)
    {
        id=ID;
        name=NAME;
        amount=AMOUNT;
        rate=RATE;
        time=TIME;
        emi=EMI;
    }

    bank()
    {
        id=0;
        name="default name";
        amount=0;
        rate=0;
        time=0;
        emi=0;
    }

    void dataentry()
    {
        cout<<"enter id:";
        cin>>id;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter amount:";
        cin>>amount;
        cout<<"enter rate:";
        cin>>rate;
        cout<<"enter time:";
        cin>>time;
    }

    void Emi()
    {
        emi=(amount*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
        cout<<"emi:"<<fixed<<setprecision(2)<<emi<<endl;
    }
};

int main()
{
    bank b[100];
    int i=0,Id,k;
    int n;
    cout<<"1 for dataentry"<<endl;
    cout<<"2 for calculate emi"<<endl;
    cout<<"0 for exit"<<endl;




    while(1)
    {
        cout<<"enter n:";
        cin>>n;
        switch(n)
        {
        case 1:
            b[i].dataentry();
            i++;
            break;
        case 2:
            cout<<"enter id:";
            cin>>Id;
            for(int j=0; j<=i; j++)
            {
                if(b[j].id==Id)
                {
                    k=j;
                    b[k].Emi();
                    break;
                }
                else
                {
                    cout<<"wrong"<<endl;
                    break;
                }

            }
            break;
        case 0:
            return 1;
        default:
            cout<<"enter valid choice"<<endl;
        }
    }


    return 0;
}
