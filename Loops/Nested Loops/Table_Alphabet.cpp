#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a Number : ";cin>>x;
	
	for(int i=1; i<=2*x-1; i++)
	{
		cout<<(char)(i+64);
	}
	cout<<endl;
	for(int i=1; i<x; i++)
	{
		char a=65;
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