#include<iostream>
using namespace std;
int count(int x)
{
	int a=0;
	while (x>0)
	{
		x/=10;
		a++;
	}
	return a;
}
int main()
{
	int a;
	cout<<"Enter a number : ";cin>>a;
	cout<<"\nThe Number Of Digits in "<<a<<" is : "<<count(a);
}