#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter number of terms : ";cin>>n;
	
	int f_term= 0;
	int s_term= 1;
	int new_term= 0;
	
	if (n>=1)
	{
		cout<<f_term<<" ";
	}
	if (n>=2)
	{
		cout<<s_term<<" ";
	}
	for(int i=1;i<=n;i++)
	{
		new_term = f_term + s_term;
		cout<<new_term<<" ";
		f_term = s_term;
		s_term = new_term;	
	}
return	0 ;
}