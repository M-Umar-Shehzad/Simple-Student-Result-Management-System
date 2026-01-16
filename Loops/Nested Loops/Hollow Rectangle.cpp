#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the number of Rows : ";cin>>m;
	cout<<"Enter the number of Columns : ";cin>>n;
	
	for(int i = 1; i<=m; i++)
	{
		for(int j = 1; j<=n; j++)
		{
			if(i==1 or j==1 or i==m or j==n )
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