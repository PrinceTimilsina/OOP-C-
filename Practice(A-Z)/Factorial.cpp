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

// #include<iostream>
// using namespace std;
// int main(){  
//     int n,f=0,i;
//     cout<<"Enter a number"; //5
//     cin>>n;    //5 
//     f=n;       //f=5
//     for(i=1;i<=(n-1);i++){
//       f=f*i;
//     }
//     cout<<"Factorial of"<<n<<"is:"<<f<<endl;
//     return 0;
// }
