#include<iostream>
using namespace std;

int sum(int x, int y)
{
	return x+y;
}
int sub(int x, int y)
{
	return x-y;
}
int multiplication(int x, int y)
{
	return x*y;
}
int division(int x, int y)
{
	return x/y;
}

int main()
{
	int a,b;
	cout<<"Enter 1st number : ";cin>>a;
	cout<<"Enter 2nd number : ";cin>>b;
	
	int c;
	cout<<"\nPress 1 for addition"<<endl;
	cout<<"Press 2 for subtraction"<<endl;
	cout<<"Press 3 for multiplication"<<endl;
	cout<<"Press 4 for division";
	
	cout<<"\n\nNumber selected : ";cin>>c;
	
	switch(c){
		case 1:
		{
			cout<<"\nThe addition of the two numbers is : "<<sum(a,b);
			break;
		}
		case 2:
		{
			cout<<"\nThe addition of the two numbers is : "<<sub(a,b);
			break;
		}
		case 3:
		{
			cout<<"\nThe addition of the two numbers is : "<<multiplication(a,b);
			break;
		}
		case 4:
		{
			cout<<"\nThe addition of the two numbers is : "<<division(a,b);
			break;
		}
		default:
		{
			cout<<"Enter a number between 1-4";
		}
	}
	
}