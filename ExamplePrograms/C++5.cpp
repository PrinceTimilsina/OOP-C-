//WAP in C++ that ask for a length in centimeter to user and convert it into kilometer,meter and centimeter;
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int cm,km,m;
	cout<<"Enter the length in centimeter:"<<endl;
	cin>>cm;
	m=cm/100;
	km=m/1000;
	m=m%1000;
	cm=cm%100;
	cout<<km<<"km"<<m<<"m"<<c<<"cm";
	return 0;
}
