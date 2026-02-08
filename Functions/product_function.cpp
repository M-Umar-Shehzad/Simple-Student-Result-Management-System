#include<iostream>
using namespace std;

int product(int , int);
int main()
{

  int a;
  int b;
  cout<<"Enter 1st Number: ";cin>>a;
  cout<<"Enter 2nd  Number: ";cin>>b;
  int result = product(a,b);
  cout<<"The result is: "<<result;


return 0;
}



int product(int x, int y)
{
   if(x*y > 100)
	{
	return x*y;
	}
   else
	{
	return x+y;
	}

}
