#include<iostream>
using namespace std;
int sqr(int x)
{
	int a=x*x;
	
	return a;
}
int main()
{
	int n;
	cout<<"Enter a number : ";cin>>n;
	int a=sqr(n);
	cout<<a;
}