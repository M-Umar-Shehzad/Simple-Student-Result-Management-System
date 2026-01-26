#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"ENter a Number : ";cin>>x;
	int min=0;
	
	for (int i=1; i<=x; i++)
	{
		for(int j=1; j<=x; j++)
		{
			if(i<j)
			{
				min=i;
			}
			else
			{
				min=j;
			}
			cout<<min;
		}
		cout<<endl;
	}
return 0;
}