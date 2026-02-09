#include<iostream>
using namespace std;


float fc(float, float);


int main()
{
float amount;
float consumption;

cout<<"Enter the amount of fuel: ";cin>>amount;
cout<<"Enter the amount of fuel consumtion rate (per 100km) of your car: ";cin>>consumption;

float result = fc(amount,consumption);

cout<<"The total distance that the car can travel is: "<<result<<" km";


return 0;
}

float fc (float x, float y)
{
  if(y==0)
	{
	 return y;
	}

  else
	{
	 float result = (x/y)*100;
	 return result;
	}
}
