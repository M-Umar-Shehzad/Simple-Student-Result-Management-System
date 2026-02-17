#include<iostream>
using namespace std;

int pow(int x, int y)
{
    int a = 1;
    for(int i=1; i<=y; i++)
    {
       a *= x;
    }
return a;
}

int main()
{
    int a,b;
    cout<<"Enter the Base: ";cin>>a;
    cout<<"Enter the Power: ";cin>>b;

    int result = pow (a,b);
    cout<<a<<" raised to the power "<<b<<" is: "<<result<<endl;

return 0;
}