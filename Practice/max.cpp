#include<iostream>
using namespace std;
int maxi(int a , int b , int c)
{
	if (a>b)
	{
		if(a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}

int main()
{
	int x,y,z;
	
	cout<<"Enter 1st number : ";cin>>x;
	cout<<"Enter 2nd number : ";cin>>y;
	cout<<"Enter 3rd number : ";cin>>z;
	
	cout<<maxi(x,y,z)<<" is the greatest value";
	
	
return 0;
}