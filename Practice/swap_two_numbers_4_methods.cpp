#include<iostream>
using namespace std;
int main()
{
	//=================Method 1===================
	int a;
	int b;
	
	
	cout<<"Enter value of a : ";cin>>a;
	cout<<"Enter value of b : ";cin>>b;
	
	cout<<"\n========\n";
	
	
//	int c = a+b;
//	
//	a = c-a;
//	b = c-b;
//	
//	cout<<a<<endl;
//	cout<<b<<endl;


//===========Method 2===========
//	int c = a;
//	
//	a = b;
//	b = c;
//	
//	cout<<a<<endl;
//	cout<<b<<endl;


//===========Method 3===========
	
	a = a+b;
	b = a-b;
	
	a=a-b;
	
	cout<<a<<endl;
	cout<<b<<endl;

//==========Method 4==============

//	a=a+b-(b=a);
//	cout<<a<<endl;
//	cout<<b<<endl;
	
return 0;
}