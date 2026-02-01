#include<iostream>
using namespace std;

bool pal(int y)
{
	int a = 0;
	int b = 0;
	int c = y;
	while(y>0)
	{
		b=y%10;
		a = (a*10)+b;
		y/=10;
	}
	if(a == c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	
	int a=pal(x);
	if(a == 1)
	{
		cout<<"Palindrome Number";
	}
	else
	{
		cout<<"Not a Palindrome Number";
	}
	
return 0;
}