#include<iostream>
using namespace std;
int add(int x)
{
	int a=0;
	while(x>0)
	{
		a+=x%10;
		x/=10;
	}
	return a;
}
int main()
{
	int n;
	cout<<"Enter a number :";cin>>n;
	
	int sum=add(n);
	cout<<"The Sum Of Digits of "<<n<< " is : "<<sum;
	
}