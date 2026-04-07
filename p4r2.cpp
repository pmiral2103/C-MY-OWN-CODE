#include <iostream>
using namespace std;

class cordinate
{
    int x;
    int y;

public:
    cordinate(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    cordinate &setx(int a)
    {
        this->x = a;
        return *this;
    }

    cordinate &sety(int b)
    {
        this->y = b;
        return *this;
    }

    void print()
    {
        cout << "x:" << x << endl
             << "y:" << y << endl;
    }
};

int main()
{
    cordinate c(2, 3);
    c.print();
    c.setx(-1).sety(4).print();
    return 0;
}