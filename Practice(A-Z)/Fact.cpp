//Factorial Program in C++
#include<iostream>
using namespace std;
int main(){
	int n,f=1 ;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	cout<<"Factorial of entered number is:"<<f<<endl;
	return 0;
}
