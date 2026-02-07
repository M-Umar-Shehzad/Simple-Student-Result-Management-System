#include<iostream>
using namespace std;

int fact(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f*=i;
	}
	return f;
}
int comb(int y, int z)
{
	int a=fact(y);
	int b=fact(z);
	int c=fact(y-z);
	int d=a/(b*c);
	
	return d;
}
int main()
{
	int n;
	cout<<"Enter a number For Pascal Triangle : ";cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n-i+1;j++)
		{
			cout<<" ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<comb(i,j)<<" ";
		}
		cout<<endl;
	}
	
}