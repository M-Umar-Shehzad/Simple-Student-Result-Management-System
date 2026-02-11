#include<iostream>
using namespace std;

void fact(int);
int main()
{
  int x;
  cout<<"Enter a number to find its factorial: ";cin>>x;
  fact(x);


return 0;
}

void fact(int a)
{
 int f = 1;
 for(int i=1; i<=a; i++)
  {
   f*=i;
  }

cout<<"Factorial = "<<f<<endl;
}
