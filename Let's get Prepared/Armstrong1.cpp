#include<iostream>
using namespace std;
int main(){
    int n,c,r,s=0;
    cout<<"Enter a number";
    cin>>n;
    c=n;
    while(n>0){
        r=n%10;
        s=(r*r*r)+s;
        n=n/10;
    }

  if(c==s){
    cout<<"The number is armstrong";
  }
  else{
    cout<<"The given number is not an armstrong;";
  }
}