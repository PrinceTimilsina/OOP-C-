#include<iostream>
#include<cmath>
using namespace std;
int main(){
  float P,R,T,CA,CI;
  cout<<"Enter Princeiple(P)"<<endl;
  cin>>P;
  cout<<"Enter Rate(R):"<<endl;
  cin>>R;
  R=R/100;
  cout<<"Enter Time(T):"<<endl;
  cin>>T;
  CA=P*pow((1-R),T);
  CI=CA-P;
  cout<<"Compound Interest(CI) is :"<<CI<<endl;
  return 0;
}
