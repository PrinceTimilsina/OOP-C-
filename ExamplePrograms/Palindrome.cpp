#include<iostream>
using namespace std;
int main(){
	int n,c,r,s=0;
	cout<<"Enter a number";
	cin>>n;
	c=n;
	while(n>0){
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s){
		cout<<"The number is palindrome";
	}
	else{
		cout<<"The number is not palindrome";
	}
	return 0;
}

