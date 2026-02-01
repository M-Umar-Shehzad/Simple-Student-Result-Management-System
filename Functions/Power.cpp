#include<iostream>
using namespace std;
int pow(int x, int y)
{
	int a=1;
	for(int i=1; i<=y; i++)
	{
		a*=x;
	}
	return a;
}
int main()
{
	int x,y;
	cout<<"Enter a Number : ";cin>>x;
	cout<<"Enter value of Exponent : "; cin>>y;
	
	int a=pow(x,y);
	cout<<x<<" raise to the power "<<y<<" gives : "<<a;
}minor formatting
