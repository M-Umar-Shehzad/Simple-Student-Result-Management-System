#include<iostream>
using namespace std;
bool prime(int x)
{
	if(x==1)
	{
		return 1;
	}
	for(int i=2; i*i<=x; i++)
	{
		if (x%i==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int x;
	cout<<"Enter a Number : ";
	cin>>x;
	int a=prime(x);
	if(a==0)
	{
		cout<<x<<" is a Prime number";
	}
	else
	{
		cout<<x<<" is not a Prime number";
	}
	
return 0;
}