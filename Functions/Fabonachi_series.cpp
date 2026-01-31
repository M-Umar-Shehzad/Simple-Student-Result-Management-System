#include<iostream>
using namespace std;


void fab(int x)
{
	int t1 = 0;
	int t2 = 1;
	int nt = 0;
	
	if (x>=1)
	{
		cout<<t1<<" ";
	}
	if (x>=2)
	{
		cout<<t2<<" ";
	}
	for(int i=1;i<=x;i++)
	{
		nt = t1 + t2;
		cout<<nt<<" ";
		t1 = t2;
		t2 = nt;
		
		
	}
	return;

}

int main()
{
	int n;
	cout<<"Enter a number : ";cin>>n;
	fab(n);
}