#include<iostream>
using namespace std;
int main()
{
    int x = 12345;
    for(int i = 1; i<=5; i++)
    {
        cout<<x<<endl;
        x/=10;
    }
}