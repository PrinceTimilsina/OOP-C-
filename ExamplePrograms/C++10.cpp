//WAP that ask for value of a,b,c and calculate Area.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  	float a,b,c,s,A;
  	cout<<"Enter the value of a: ";
  	cin>>a;
  	cout<<"Enter the value of b: ";
  	cin>>b;
  	cout<<"Enter the value of c: ";
  	cin>>c;
    s=a+b+c/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of scalene triangle is: "<<A;
    return 0;
}
