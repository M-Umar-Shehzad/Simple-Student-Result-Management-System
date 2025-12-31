#include<iostream>
using namespace std;	
int main() 
{ 
	int x; 
	cout<<"Enter A Number To Print Odd Numebrs Upto That Number : ";cin>>x; 
	while(x<1) 
	{ 
		cout<<"Enter a Positive Integer : ";cin>>x; 
	} 
	for(int i=1; i<=x; i++) 
	{ 
		if(i%2==0)continue; 
		{
			cout<<i<<endl; 
		} 
	}
	
return 0;
 }