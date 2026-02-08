#include <iostream>
using namespace std;

void repeat(char, int);
int main()
{
 char a;
 int length;
 cout<<"\nEnter a character: ";cin>>a;
 cout<<"Enter a number to repeat it that many times: ";cin>>length;
 repeat(a,length);

return 0;
}

void repeat (char x, int y)
{
 for(int i=1; i<=y; i++)
 {
 cout<<x;
 }

cout<<endl;

return;
}
