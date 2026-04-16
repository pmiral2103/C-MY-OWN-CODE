#include<iostream>
using namespace std;

class grade
{
protected:
    float marks;

public:
    virtual ~grade() {}
    grade(float m)
    {
        marks=m;
    }
    virtual void gradeing()=0;
};

class undergratuate:public grade
{
public:
    undergratuate(float m):grade(m) {}
    void gradeing()
    {
        if (marks >= 85) cout << "A";
        else if (marks >= 70) cout << "B";
        else if (marks >= 50) cout << "C";
        else cout << "Fail";
        cout << endl;
    }
};

class postgratuate:public grade
{
public:
    postgratuate(float m):grade(m) {}
    void gradeing()
    {
        if (marks >= 90) cout << "A";
        else if (marks >= 75) cout << "B";
        else if (marks >= 60) cout << "C";
        else cout << "Fail";
        cout << endl;
    }
};

int main()
{
    int n, type;
    float marks;

    cout << "Enter number of students: ";
    cin >> n;

    grade* g[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        cout << "Enter type (1 = Undergraduate, 2 = Postgraduate): ";
        cin >> type;

        cout << "Enter marks: ";
        cin >> marks;

        if(type == 1)
            g[i] = new undergratuate(marks);
        else
            g[i] = new postgratuate(marks);
    }

    cout << "\n--- Grades ---\n";
    for(int i = 0; i < n; i++)
    {
        g[i]->gradeing();
    }

    for(int i = 0; i < n; i++)
    {
        delete g[i];
    }
    return 0;
}
