#include<iostream>
using namespace std;
int main(){
	int a,b,i;
	cout<<"Enter the fist number:"<<endl;
	cin>>a;
	cout<<"Enter the second number:"<<endl;
	cin>>b;
	for(i=a;i<=a*b;i++)
		if(i%a==0 && i%b==0){
			cout<<"Required LCM of given number is:"<<i<<endl;
			break;
		}
	
	return 0;
}

