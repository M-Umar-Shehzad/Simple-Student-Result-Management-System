#include<iostream>
using namespace std;

// Solved it using two methods

//==================Method 1===================
int comp(int x, int y)
{
	
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
int x,y;
cout<<"Enter 1st number : ";cin>>x;
cout<<"Enter 2nd number : ";cin>>y;
int z = comp(x,y);
if(z==x)
{
	cout<<x<<" is the greater value";
}
else
{
	cout<<y<<" is the greater value";
}

	
return 0;	
}

//========================Method 2=============================
//void comp(int x, int y)
//{ 
//  int a = x; 
//  int b = y; 
//  if(a>b) 
//  { 
//  cout<<a<<" Is Greater Value"; 
//  } 
//  else 
//  { 
//  cout<<b<<" Is Greater Value"; 
//  } 
//  return; 
//} 
//  
//int main() 
//{ 
//
//int x,y; 
//cout<<"Enter 1st number : ";cin>>x; 
//cout<<"Enter 2nd number : ";cin>>y; 
//comp(x,y); 
//
//return 0; 
//
//}
