#include <iostream>
using namespace std;
bool ed(int x)
{
	if(x%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int x;
	cout<<"Enter  a Number : ";cin>>x;
	int a=ed(x);
	
	if(a==0)
	{
		cout<<"Even";
	}
	else
	{
		cout<<"Odd";
	}
	
	
return 0;	
}