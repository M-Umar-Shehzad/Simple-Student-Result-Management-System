#include<iostream>
using namespace std;
int add(int x,int y)
{
	int add=x+y;
	
	return add;
}
int main()
{
	int a,b;
	cout<<"Enter 1st number : ";cin>>a;
	cout<<"Enter 2nd number : ";cin>>b;
	int sum=add(a,b);
	cout<<"The Sum Of The Two Numbers Is : "<<sum;
	
return 0;
}