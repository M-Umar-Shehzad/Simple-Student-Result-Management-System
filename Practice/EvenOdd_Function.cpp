#include<iostream>
using namespace std;


void evenodd(int);
int main()
{
  int x;
  cout<<"Enter a number: ";cin>>x;
  evenodd(x);

return 0;
}

void evenodd(int a)
{
 if(a%2==0)
  {
   cout<<"EVEN";
  }
 else
  {
   cout<<"ODD";
  }

}
