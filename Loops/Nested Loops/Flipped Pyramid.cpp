#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	int a=2*x-1;
	
	for(int i=1; i<=x; i++)
	{
		
		for(int j=1;j<=i-1;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=a;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		a-=2;
	}
return 0;
}