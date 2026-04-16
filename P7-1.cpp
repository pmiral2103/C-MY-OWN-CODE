
#include<iostream>
using namespace std;

class calcultor
{
    double result[100];
    int c=0;
public:
    int add(int a,int b)
    {
        int res=a+b;
        result[c]=res;
        c++;
        return res;
    }
    float add(int a,float b)
    {
        float res=a+b;
        result[c]=res;
        c++;
        return res;
    }
    float add(float a,int b)
    {
        float res=a+b;
        result[c]=res;
        c++;
        c++;
        return res;
    }
    float add(float a,float b)
    {
        float res=a+b;
        result[c]=res;
        c++;
        return res;
    }
    void displayResults()
    {
        cout << "\nStored Results:\n";
        for(int i = 0; i < c; i++)
        {
            cout << result[i] << endl;
        }
    }
};
int main()
{
    calcultor c;
    cout<<c.add(3,4)<<endl;
    cout<<c.add(3,4.5f)<<endl;
    cout<<c.add(3.4f,4.8f)<<endl;
    cout<<c.add(3.4f,5)<<endl;

    c.displayResults();
    return 0;
}
