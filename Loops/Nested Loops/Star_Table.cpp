#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a Number : ";cin>>x;
	
	for(int j=1; j<=2*x+1; j++)
	{
		cout<<"*";
	}
	cout<<endl;
	
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=x-i+1; j++)
		{
			cout<<"*";
		}
		for(int j=1; j<=2*i-1; j++)
		{
			cout<<" ";
		}
		for(int j=1; j<=x-i+1; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
return 0;
}