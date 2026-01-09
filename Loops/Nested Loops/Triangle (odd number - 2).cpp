#include<iostream>
using namespace std;
int main()
{
	int x , a=1;
	cout<<"Enter a value for x : ";cin>>x;
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=i; j++)
		{
			
			cout<<a<<" ";
			a+=2;
			
		}
		cout<<endl;
		
	}
	
	
return 0;
}