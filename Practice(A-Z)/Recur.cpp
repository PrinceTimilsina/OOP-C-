//Recursive function in C++
#include<iostream>
using namespace std;
int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1)
	}
}
int main(){
	int n ;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"Factorial of entered number is:"<<fact(n)<<endl;
	return 0;
}
// n=5
//n*fact(4)
//5*fac(4)

