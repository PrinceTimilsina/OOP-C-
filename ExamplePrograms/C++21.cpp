#include<iostream>
using namespace std;
int main()
{
	int i;
	abc:
	cout<<"loop is exit";//Logical error
	for(i=1;i<=10;i++){
		if(i==5){
			goto abc;
		}
		cout<<i;
	}


	return 0;
}