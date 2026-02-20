#include<iostream>
using namespace std;
int sum(int x)
{
	if(x==1) return 1;
	
	return x + sum(x-1);
}
int main()
{
	int x,a;
	cout<<"Enter a number : ";cin>>x;
	a=sum(x);
	cout<<a;
	
return 0;
}