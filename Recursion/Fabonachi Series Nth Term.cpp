#include<iostream>
using namespace std;
int fab(int);
int main()
{
	int x;
	cout<<"Enter a number : ";cin>>x;
	cout<<fab(x);
}

//==================Method 1==================

//If the series is to be started from 0 then this method can be used e.g 0,1,1,2,3,5,8...


//int fab(int x)
//{
//	if(x==0)
//	{
//		return 0;
//	}
//	else if(x==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fab(x-1)+fab(x-2);
//	}
	
//==================Method 2==================

//If the series is to be started from 1 then this method can be used e.g 1,1,2,3,5,8...
int fab(int x)
{
	if(x==1 || x==2)
	{
		return 1;
	}
	else
	{
		return fab(x-1)+fab(x-2);
	}

return 0;
}