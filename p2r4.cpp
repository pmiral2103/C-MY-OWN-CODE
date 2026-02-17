/*A retail store requires a digital system to manage its inventory of items. Each item has:
 Unique item ID
 Item name
 Price
 Quantity in stock
The system must allow:
 Initialization using default or parameterized constructors
 Increasing stock when new shipments arrive
 Decreasing stock when items are sold
 Validating stock before sale
 Displaying item details for decision-making*/

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
}
void increasingstock()
{
int stock;
cout<<"how many new stock arrive:";
cin>>stock;
quantity=quantity+stock;
cout<<"succesfully!!"<<endl;
cout<<"your new stock:"<<quantity<<endl;
}
void decreasingstock()
{
int stock;
cout<<"how many new stock arrive:";
cin>>stock;
if(quantity>=stock)
quantity=quantity-stock;
cout<<"succesfully!!"<<endl;
cout<<"your new stock:"<<quantity<<endl;
}
void validating()
{
int stock;
cout<<"how many new stock arrive:";
cin>>stock;
if(quantity>=stock)
cout<<"yes,stock is avaible"<<endl;
}
void display()
{
cout<<"id:"<<id;
cout<<"name:"<<name<<endl;
cout<<"price:"<<price<<endl;
cout<<"quantity:"<<quantity<<endl;
}
item():
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
int n,i;
cout<<"1 for enter"<<endl;
cout<<"2 for stock increase"<<endl;
cout<<"3 for stock decrease"<<endl;
cout<<"4 for validting"<<endl;
cout<<"5 for display"<<endl;
cout<<"0 for exit"<<endl;
do
{
cout<<"enter your choice:";
cin>>n;
switch(n)
{
case 1:i[0].dataentry();
       break;
case 2:cout<<"enter index id:";
       cin>>i;
       i[i].increasingstock();
       break;
case 3:cout<<"enter index id:";
       cin>>i;
       i[i].decreasingstock();
       break;
}
}
}
