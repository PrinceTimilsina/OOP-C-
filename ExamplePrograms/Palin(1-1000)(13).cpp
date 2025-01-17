#include<iostream>
using namespace std;
int main(){
	int n,nn,r,s;
	cout<<"Palindrome Number upto 1 to 1000 are: ";
	for(n=1;n<=1000;n++){
		nn=n;
		s=0;
		while(nn!=0){
			r=nn%10;
			s=s*10+r;
			nn=nn/10;
		}
		if(s==n){
			cout<<n<<" ";
		}
	
	}
	return 0;
}
