#include<iostream>
using namespace std;

void swap(int*,int*);

int main()
{
  int x;
  int y;

cout<<"Enter the 1st Number: ";cin>>x;
cout<<"Enter the 2nd Number: ";cin>>y;

cout<<"\n   **Before Swap**    "<<endl;
cout<<"1st Number is: "<<x<<endl<<"2nd Number is: "<<y;

int* p = &x;
int* q = &y;

swap(p,q);
cout<<"\n  **After Swap**      "<<endl;
cout<<"1st Number is: "<<x<<endl<<"2nd Number is: "<<y<<endl;

return 0;
}

void swap(int* a, int* b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
