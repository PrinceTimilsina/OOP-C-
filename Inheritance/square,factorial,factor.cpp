//WAP that ask a number from the user and calculate squre root,factorial,factors,and also check whether that is prime or composite multilevel inheritance.
#include<iostream>
#include<cmaths>
using namespace std;
class Squareroot(){
	public:
		int n,sq;
		cout<<"Enter a number";
		cin>>n;
	 int Squareroot(){
	     sq=sqrt(n);
	     cout<<"The squareroot of given number:"<<sq<<endl;
	     return 0;
	 }
};
class Factorial{
	int f=1;
	int factorial(){
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	cout<<"Factorial of entered number is:"<<f<<endl;
	return 0;
		}
};

//WAP that ask a number from the user and calculate squre root,factorial,factors,and also check whether that is prime or composite multilevel inheritance.
#include<iostream>
#include<cmaths>
using namespace std;
class Squareroot(){
	public:
		int n,sq;
		cout<<"Enter a number";
		cin>>n;
	 int Squareroot(){
	     sq=sqrt(n);
	     cout<<"The squareroot of given number:"<<sq<<endl;
	     return 0;
	 }
};
class Factorial{
	int f=1;
	int factorial(){
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	cout<<"Factorial of entered number is:"<<f<<endl;
	return 0;
		}
};

class factors{
    public:
    int factors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            cout<<i<< " ";
        }
    }
    cout << endl;
}
}










