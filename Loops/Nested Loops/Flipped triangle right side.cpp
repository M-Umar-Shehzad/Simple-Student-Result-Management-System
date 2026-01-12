#include<iostream>
using namespace std;
int main()
{
	//----------------------METHOD 1------------------------
//	int x;
//	cout<<"Enter a Numebr : ";cin>>x;
//	
//	for(int i=1; i<=x; i++)
//	{
//		for(int j=1; j<=i-1; j++)
//		{
//			cout<<" ";
//		}
//		
//		for (int j=1; j<=x-i+1; j++ )
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}
	
	
	// --------------------METHOD 2---------------------------
	int x;
	cout<<"Enter a Numebr : ";cin>>x;
	int nst=x;
	int nsp=0;
	
	for(int i=1; i<=x; i++)
	{
		for(int j=1; j<=nsp; j++)
		{
			cout<<" ";
		}
		
		for (int j=1; j<=nst; j++ )
		{
			cout<<"*";
		}
		nsp++;
		nst--;
		cout<<endl;
	}
	
	
	
return 0;
}