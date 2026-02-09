#include<iostream>
using namespace std;

char grade (int);
int main()
{
  int marks;
  cout<<"Enter your Marks: ";cin>>marks;
  if(marks>100 || marks<0)
  {
  cout<<"Invalid Marks... Please Enter Your Correct Marks: ";cin>>marks;
  }

  cout<<"Your Grade Is: "<<grade(marks);

return 0;
}

char grade (int x)
{
 if(x>=90) return 'A';
 else if(x>=80 && x<90) return 'B';
 else if(x>=70 && x<80) return 'C';
 else if(x>=60 && x<70) return 'D';
 else if(x>=50 && x<60) return 'E';
 else return 'F';

}
