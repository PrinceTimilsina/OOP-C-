//WAP to find factorial of entered number
#include<iostream>
using namespace std;
int main()
{
	int n,f=1,i;
   cout<<"Enter a number"<<endl;
   cin>>n;
   for(i=1;i<=n;i++){
    f=f*i;
   }
   cout<<"Factorial of"<<n<<"is"<<f<<endl;
   return 0;
}