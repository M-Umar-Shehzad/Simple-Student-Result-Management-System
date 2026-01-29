#include<iostream>
using namespace std;
int com(int x)
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
	int n,r;
	
	cout<<"Enter a number for n : ";cin>>n;
	cout<<"Enter a numebr for r : "; cin>>r;
	
	int a=com(n);
	int b=com(r);
	int c=com(n-r);
	cout<<"The Combination 'nCr' of "<<n<<" and "<<r<<" is : "<<a/(b*c);
	
	/* I can either create a variable like the one below and store the value of calculation in it and display 
	the variable or i can just directly do the calcuations in the cout like given above.*/
	
//	int combination=a/(b*c);
//	cout<<"The Combination 'nCr' of "<<n<<" and "<<r<<" is : "<< combination;
}