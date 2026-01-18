#include<iostream>
using namespace std;
int main()
{
	//------------------------METHOD 1-----------------------------
	int n;
	cout<<"Enter a number : ";cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		for(int j=1; j<=i; j++)
		{
			cout<<j;
		}
//		for(int j=2; j<=i; j++) // I can use this method which I did from my own
//		{
//			cout<<(i-j)+1;
//		}
// 		cout<<endl;
		for(int j=1; j<=i-1; j++) // or i can use this method which i learned during lecture
		{
			cout<<i-j;
		}
		cout<<endl;
	}
	
//---------------------------METHOD 2---------------------------------
// This method uses a variable inside the third inner loop
	// int n;
	// cout<<"Enter a number : ";cin>>n;
	
	// for(int i=1; i<=n; i++)
	// {
		
	// 	for(int j=1; j<=n-i; j++)
	// 	{
	// 		cout<<" ";
	// 	}
	// 	for(int j=1; j<=i; j++)
	// 	{
	// 		cout<<j;
	// 	}
	// 	int a = i-1;
	// 	for(int j=1; j<=i-1; j++)
	// 	{
	// 		cout<<a;
	// 		a--;
	// 	}
	// 	cout<<endl;
	// }
	
return 0;
}