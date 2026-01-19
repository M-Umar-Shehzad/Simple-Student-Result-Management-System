#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter a Number of rows : ";cin>>m;
	cout<<"Enter a Number of columns: ";cin>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if (i==1 or i==m or j==1 or j==n or (i+j)%2==0)
			{
				cout<<" * ";
			}
			else
			{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
}