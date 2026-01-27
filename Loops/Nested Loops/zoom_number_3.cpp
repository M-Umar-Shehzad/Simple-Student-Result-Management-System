#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"ENter a Number : ";cin>>x;
	int min=0 , a=0;
	
	for (int i=1; i<=2*x-1; i++)
	{
		for(int j=1; j<=2*x-1; j++)
		{
			int a=i,b=j;
			
			if(i>x)
			{
				a=2*x-i;
			}
			if(j>x)
			{
				b=2*x-j;
			}
			if(a<b)
			{
				min=a;
			}
			else
			{
				min=b;
			}
			cout<<(x+1)-min<<" ";
		}
		cout<<endl;
	}
return 0;
} 