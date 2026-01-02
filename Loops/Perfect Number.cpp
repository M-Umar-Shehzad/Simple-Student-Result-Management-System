#include <iostream>
using namespace std;

int main()
{
    int x;
    int sum = 0;

    cout << "Enter a number : ";
    cin >> x;

    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
            sum += i;
    }

    if (sum == x)
        cout << "Perfect Number";
    else
        cout << "Not Perfect";

    return 0;
}
