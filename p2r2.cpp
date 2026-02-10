#include <iostream>
using namespace std;

class student
{
private:
    int rnumber;
    string name;
    int marks[3];

public:
    void getdata()
    {
        cout << "enter name:";
        cin >> name;
        for (int i = 0; i < 3; i++)
        {
            cout << "enter marks:";
            cin >>marks[i];
        }
    }

    void averge()
    {
        int total = 0;
        for (int i = 0; i < 3; i++)
        {
            total = total + marks[i];




            
        }
        float avg = total / 3;
        cout << "average marks:" << avg<<endl;
    }
    student()
    {
        name = "dafault name";
        for (int j = 0; j < 3; j++)
        {
            marks[j] = 0;
        }
    }
};

int main()
{
    student s[10];
    cout << "you like to enter data press 1\n";
    cout << "print avaerge marks press 2\n";
    cout << "0 for exit\n";

    while (1)
    {
        int n;
        cout << "enter your choice:";
        cin >> n;
        switch (n)
        {
        case 1:
            int m;
            cout << "enter roll numner:";
            cin >> m;
            s[m - 1].getdata();
            break;
        case 2:
            for (int i = 0; i < 10; i++)
            {
                s[i].averge();
            }
            break;
        case 0:
            return 1;
        }
    }
    return 0;
}