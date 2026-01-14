#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a Number : ";cin>>x;
	
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=i;j++)
			{
				cout<<j;
			}
		
		for(int j=1; j<=i-1;j++)
			{
				cout<<i-j;
			}
		cout<<"\n";
	}
}