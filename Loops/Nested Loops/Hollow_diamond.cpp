#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter A Number : ";cin>>x;
	
	for(int i=1; i<=x; i++)
	{
		for (int j=1; j<=x-i+1; j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			if(j==1 || j==2*i-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}

	
	
	for(int i=2; i<=x; i++)
	{
	
		for (int j=1; j<=i; j++)
		{
			cout<<" ";
		}
		for(int j=1; j<=(2*(x-i+1))-1;j++)
		{
			if(j==1 || j==(2*(x-i+1))-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
}