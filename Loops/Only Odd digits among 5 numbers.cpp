#include<iostream> 
using namespace std; 
int main() 
{ 
	int a,b,c,d,e; 
	cout<<"---Enter 5 Positive Integers---"; 
	cout<<"\n\n1st Positive Integers : ";cin>>a; 
	cout<<"2nd Positive Integers : ";cin>>b; 
	cout<<"3rd Positive Integers : ";cin>>c; 
	cout<<"4th Positive Integers : ";cin>>d; 
	cout<<"5th Positive Integers : ";cin>>e; 
	for(int i=1; i<=5; i++) 
	{ 
		int value; 
		 
		if(i==1) 
		{ 
		value=a; 
		} 
		if(i==2) 
		{ 
		value=b; 
		} 
		if(i==3) 
		{ 
		value=c; 
		} 
		if(i==4) 
		{ 
		value=d; 
		} 
		if(i==5) 
		{ 
		value=e; 
		} 
		 
		if(value%2==0)continue; 
		cout<<value<<endl; 	
	} 
	
return 0; 	
}