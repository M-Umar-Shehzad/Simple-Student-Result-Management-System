#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a Number : ";cin>>x;
	
	for(int i=1; i<=2*x-1; i++)
	{
		cout<<i;
	}
	cout<<endl;
	for(int i=1; i<x; i++)
	{
		int a=1;
		for(int j=1; j<=x-i; j++)
		{
			cout<<a;
			a++;
		}
		for(int j=1; j<=2*i-1; j++)
		{
			cout<<" ";
			a++;
		}
		for(int j=1; j<=x-i; j++)
		{
			cout<<a;
			a++;
		}
		cout<<endl;
	}
return 0;
}  