#include<iostream>
using namespace std;

int fact(int x)
{
	int f=1;
	for(int i=1; i<=x; i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	int n;// I can either pass n to the fact function or i can create a new vairable save value of fact n inside it and then cout that variable
	cout<<"Enter a Number : ";cin>>n;
	//int a=fact(n);  // i can now cout this variable "a" as well it will also return value of the function for hte given input "n";
	cout<<"The Factorial of "<<n<<" is : "<<fact(n);
	
return 0;
}

