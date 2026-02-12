#include<iostream>
using namespace std;

float convert(float); 
int main()
{
float temp;
cout<<"\nEnter your temperature: ";cin>>temp;
cout<<"\nYour Temperature in Celcius is: "<<temp;

float result = convert(temp);
cout<<"\nYour Temperature in Farenheit is: "<<result;


return 0;
}

float convert (float x)
{
  float f  = (x * 1.8) + 32;
return f;
}
