#include<iostream>
using namespace std;
int fac(int x)
{
	int f=1;
	for(int i=1;i<=x;i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	int n;
	cout<<"Enter a Number For Pascal Triangle : "; cin>>n;

	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			cout<<" ";
		}
		
		int a=fac(i);
		for(int j=0;j<=i;j++)
		{
			int b=fac(j);
			int c=fac(i-j);
			int d=a/(b*c);
			cout<<d<<" ";
		}
		cout<<endl;
	}
	
return 0;

}