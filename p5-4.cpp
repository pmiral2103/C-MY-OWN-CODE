#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& out)
{
    out << "Rs. ";
    return out;
}

int main()
{
    string name[3] = {"Miral", "Maitry", "Khushi"};
    float marks[3] = {85.5, 72.3, 91.8};
    int fees[3] = {25000, 30000, 28000};

    cout << setw(15) << "Name"
         << setw(15) << "Marks"
         << setw(15) << "Fees" << endl;


    for (int i = 0; i < 3; i++)
    {
        cout << setw(15) << name[i]
             << setw(15) << fixed << setprecision(2) << marks[i]
             << setw(10) << currency << fees[i]
             << endl;
    }

    return 0;
}
