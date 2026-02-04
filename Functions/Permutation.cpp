#include<iostream>
using namespace std;
int per(int x){
	int f=1;
	for (int i=1; i<=x; i++)
	{
		f*=i;
	}
	return f;
}
int main()
{
	int n,r;
	cout<<"Enter a number for n : ";cin>> n;
	cout<<"Enter a number for r : ";cin>> r;
	cout<<"\n============================\n";
	
	int a=per(n);
	int b=per(r);
	int c=per(n-r);
	//cout<<"The Permutation of "<<n<<" and "<<r<<" is : "<<(a/(b*c))*b;  
	
//	=======================OR=====================
//	int e = (a/(b*c))*b;
//	cout<<"The Permutation of "<<n<<" and "<<r<<" is : "<<e;
	
	
	
	/* The one above is the formula for permutation but its derived by multiplying r factorial 
	with the answer of combination "nCr" formula. The second Method for solving Permutation "nPr" is Given below
	though the formula used in the frst method is also valid and can always be used instead of the orignal one  */
	
	
//	cout<<"The Permutation of "<<n<<" and "<<r<<" is : "<<a/c;
	
//	=====================OR===================
	
	int d = a/c;
	cout<<"The Permutation of "<<n<<" and "<<r<<" is : "<<d;
	
return 0;
}