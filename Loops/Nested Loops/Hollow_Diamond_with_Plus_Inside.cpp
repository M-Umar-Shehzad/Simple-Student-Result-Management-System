#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"For triangle Enter A Number : ";cin>>x;
	
	for(int i=1; i<=x; i++)
	{
		for (int j=1; j<=x-i+1; j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			if(j==1 || j==2*i-1 or i==x or i == j)
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
			if(j==1 or j==(2*(x-i+1))-1 or j == x-i+1 ) // we can write either x-i+1 or simply use the n/2 + 1 formula where n in this case will be (2*(x-i+1))-1 so it will be divided by 2 and then one will be added to it so it becomes (((2*(x-i+1))-1)/2) + 1
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