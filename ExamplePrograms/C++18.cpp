#include<iostream>
using namespace std;
int main(){
	int f=0,i;
	cout<<"The required composite numbers are:";
	for(i=1;i<=100;i++){
		int n=1;
		if(n%i==0){
			f=f+1;
		}
		if(f==2){
	        continue;
		}
		else{
			cout<<n;
		}
		n++;
	}
	return 0;
}