#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int rev = 0;

    cout << "Enter a number : ";
    cin >> x;

    while (x > 0)
    {
        y = x % 10;
        rev = rev * 10 + y;
        x = x / 10;
    }

    cout << rev;
    return 0;
}
