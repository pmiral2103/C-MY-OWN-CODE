#include<iostream>
using namespace std;

class item
{
int id;
string name;
float price;
int quantity;

public:
void dataentry()
{
cout<<"enter id:";
cin>>id;
cout<<"enter name:";
cin>>name;
cout<<"enter price:";
cin>>price;
cout<<"enter quantity:";
cin>>quantity;
cout<<endl;
}

void increasingstock()
{
int stock;
cout<<"how many new stock arrive:";
cin>>stock;
quantity=quantity+stock;
cout<<"succesfully!!"<<endl;
cout<<"your new stock:"<<quantity<<endl<<endl;
}

void decreasingstock()
{
int stock;
cout<<"how many new stock arrive:";
cin>>stock;
if(quantity>=stock)
{
quantity=quantity-stock;
cout<<"succesfully!!"<<endl;
cout<<"your new stock:"<<quantity<<endl<<endl;
}
else
{
cout<<"stock is not limited"<<endl<<endl;
}
}

void validating()
{
int stock;
cout<<"how many new stock arrive:";
cin>>stock;
if(quantity>=stock)
{
cout<<"yes,stock is avaible"<<endl<<endl;
}
else
{
cout<<"stock is not limited"<<endl<<endl;
}
}

void display()
{
cout<<"id:"<<id<<endl;
cout<<"name:"<<name<<endl;
cout<<"price:"<<price<<endl;
cout<<"quantity:"<<quantity<<endl<<endl;
}

item()
    {
    name="default name";
    price=0;
    quantity=0;
    id=0;
    }
};

int main()
{
item i[100];
int n,j,k=0;
cout<<"1 for enter"<<endl;
cout<<"2 for stock increase"<<endl;
cout<<"3 for stock decrease"<<endl;
cout<<"4 for validting"<<endl;
cout<<"5 for display"<<endl;
cout<<"0 for exit"<<endl<<endl;

do
{
cout<<"enter your choice:";
cin>>n;

switch(n)
{
case 1:i[k].dataentry();
       k++;
       break;
case 2:cout<<"enter index id:";
       cin>>j;
       i[j].increasingstock();
       break;
case 3:cout<<"enter index id:";
       cin>>j;
       i[j].decreasingstock();
       break;
case 4:cout<<"enter index id:";
       cin>>j;
       i[j].validating();
       break;
case 5:cout<<"enter index id of that product:";
      cin>>j;
      i[j].display();
      break;
case 0:return 1;
}

}
while(n!=0);

return 0;
}
