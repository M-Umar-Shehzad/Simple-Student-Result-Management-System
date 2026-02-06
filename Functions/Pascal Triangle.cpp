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

int main()
{
	int n;
	cout<<"Enter a number : ";cin>>n;
	for(int i=0;i<=n;i++)
	{
		int a=fact(i);
		for(int j=0;j<=i;j++)
		{
			int b=fact(j);
			int c=fact(i-j);
			int d=a/(b*c);
			cout <<d<<" ";
		}
		cout<<endl;	
	}
	
return 0;
}
