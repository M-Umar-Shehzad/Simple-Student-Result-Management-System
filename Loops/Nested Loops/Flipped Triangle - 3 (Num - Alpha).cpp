#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a value for x : ";cin>>x;
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=x-i+1; j++)
		{
			if(i%2==0)
			{
				cout<<(char)(j+64);
			}
			else
			{
				cout<<j;
			}
		}
		cout<<endl;
	}
	
	
return 0;
}