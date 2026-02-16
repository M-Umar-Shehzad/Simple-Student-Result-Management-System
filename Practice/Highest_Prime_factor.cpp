#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;

    for (int i = x; i >= 2; i--)
    {
        if (x % i == 0)
        {
            bool flag = true;

            for (int a = 2; a <= i / 2; a++)
            {
                if (i % a == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag==true)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}
