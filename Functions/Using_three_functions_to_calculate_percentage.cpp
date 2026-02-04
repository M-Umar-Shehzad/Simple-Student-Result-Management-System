#include<iostream>
using namespace std;

float cal(int a, int b)
{
	float f = (b/a)*100;
	
	return f;
}


void result(string g,int h, int i)
{
	int per=cal(h,i);
	cout<<"The Percentage Obatained by "<<g<<" in "<<h<<" Paper is : "<<per<<"%";
	
	return;
}


int main()
{
	string x;
	float y,z;
	cout<<"Enter the name of a student : ";cin>>x;
	cout<<"Enter the Total Marks for the Paper : ";cin>>y;
	cout<<"Enter the Marks Obtained by the student : ";cin>>z;
	
	result (x,y,z);
	
return 0;	
}