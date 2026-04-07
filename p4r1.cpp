#include <iostream>
using namespace std;

int main()
{
    int n, choice, index;
    cout << "enter n:";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element:";
        cin >> *(arr + i);
    }

    cout << "if you want to change value write 1";
    cout << "enter your choice:";
    cin >> choice;

    if (choice)
    {
        cout << "enter inder number:";
        cin >> index;
        cout << "enter the value:";
        cin >> *(arr + index);

        for (int i = 0; i < n; i++)
        {
            cout << *(arr + i) << " ";
        }
    }

    cout << "if you want to add new number write 1:";
    cin >> choice;

    if (choice)
    {
        cout << "enter n:";
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "enter the element:";
            cin >> *(arr + i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    delete[] arr;
    return 0;
}