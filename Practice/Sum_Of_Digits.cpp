#include <iostream>
using namespace std;

int main()
{
    int x;
    int sum = 0;

    cout << "Enter a number : ";
    cin >> x;

    while (x > 0)
    {
        int y = x % 10;
        sum += y;
        x = x / 10;
    }

    cout << sum;
    return 0;
}
