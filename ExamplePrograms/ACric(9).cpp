#include<iostream>
#include<cmath>
using namespace std;
int main(){
	const float pi=3.14;
	       float A,r;
	       cout<<"Enter radius of circle: ";
	       cin>>r;
	        A = pi * pow(r, 2);
	       cout<<"Area of Circle is: "<<A;
	       return 0;
}
