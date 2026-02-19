#include<iostream>
using namespace std;

void add(int x, int y)
{

	if(x==0)
	{
	  cout<<y;
		
	  return;
	}
	add(x-1, y+x);
	
	return;       
}
int main()
{
	int x,y=0;

	cout<<"Enter a Number : ";cin>>x;
	
	add(x,y);

	
return 0;
}