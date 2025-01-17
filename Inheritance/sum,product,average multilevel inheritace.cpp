//WAP that ask user any three number and find sum,product and average of that numbers.
#include<iostream>
#include<cmaths>
 using namespace std;
 class Sum{
  	public:
  		int a, b, c;
  		cout << " Enter any three number consecutively: " ;
  		cin >> a >> b >> c;
  		int sum() {
  			int s=a+b+c;
  			cout<<"Sum of given three number is:"<<s<<endl;
  			cout<<"-------------------------------------"<<endl;
  			return 0;
		  }
  };
  class Product:public Sum{
  	public:
  		int p;
  	int product(){
  		p=a*b*c;
  		cout<<"Product of given three number is:"<<p<<endl;
  		cout<<"-----------------------------------------"<<endl;
  		return 0;
	  }
  };
  