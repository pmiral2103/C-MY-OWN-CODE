#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int ch;
    string name,sname;
    int q;
    float p;

    do
    {
        cout<<endl<<"1 add";
        cout<<endl<<"2 view";
        cout<<endl<<"3 search";
        cout<<endl<<"4 exit";
        cout<<endl<<"enter choice:";
        cin>>ch;

        if(ch==1)
        {
            ofstream f("data.txt",ios::app);

            cout<<"enter name:";
            cin>>name;
            cout<<"enter qty:";
            cin>>q;
            cout<<"enter price:";
            cin>>p;

            f<<name<<" "<<q<<" "<<p<<endl;
            f.close();
        }

        if(ch==2)
        {
            ifstream f("data.txt");

            while(f>>name>>q>>p)
            {
                cout<<"name:"<<name<<" qty:"<<q<<" price:"<<p<<endl;
            }

            f.close();
        }

        if(ch==3)
        {
            ifstream f("data.txt");
            int found=0;

            cout<<"enter search name:";
            cin>>sname;

            while(f>>name>>q>>p)
            {
                if(name==sname)
                {
                    cout<<"name:"<<name<<" qty:"<<q<<" price:"<<p<<endl;
                    found=1;
                }
            }

            if(found==0)
            {
                cout<<"not found";
            }

            f.close();
        }

    }
    while(ch!=4);

    return 0;
}
