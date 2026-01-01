#include <iostream>
using namespace std;

int main()
{
    int x;
    bool flag = true;

    cout << "Enter a number : ";
    cin >> x;

    if (x <= 1)
    {
        cout << "Neither Prime Nor Composite";
        return 0;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}
