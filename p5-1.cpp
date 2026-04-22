#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    string word[100];
    int count[100];
    int n=0;

    cout<<"enter paragraph:";
    getline(cin,a);

    string temp="";

    for(int i=0; i<=a.length(); i++)
    {
        char ch=a[i];

        if(ch>='A' && ch<='Z')
        {
            ch=ch+32;
        }

        if(ch!=' ' && ch!='\0')
        {
            temp=temp+ch;
        }
        else
        {
            if(temp!="")
            {
                int found=0;

                for(int j=0; j<n; j++)
                {
                    if(word[j]==temp)
                    {
                        count[j]++;
                        found=1;
                        break;
                    }
                }

                if(found==0)
                {
                    word[n]=temp;
                    count[n]=1;
                    n++;
                }

                temp="";
            }

        }

        cout<<"frequency"<<endl;

        for(int i=0; i<n; i++)
        {
            cout<<word[i]<<" = "<<count[i]<<endl;
        }

        return 0;
    }
