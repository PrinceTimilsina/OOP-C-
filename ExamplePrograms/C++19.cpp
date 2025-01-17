#include<iostream>
using namespace std;
int main(){
	int f,i,j,n;
	cout<<"The required composite numbers are:";
for(j=2;j<=100;j++){
	f=0;
	for(i=1;i<=j;i++){
		if(j%i==0){
			f++;
		}
	}
	if(f==2){
		continue;
	}
	else{
		cout<<j<<" ";
	}
	}
	return 0;
}
