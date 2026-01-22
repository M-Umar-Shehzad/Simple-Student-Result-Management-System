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
			if(j==1 or j==2*i-1 or i==x)
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
	
return 0;	
}