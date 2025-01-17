#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    if((n%5==0)&&(n%11==0)){  //Here,using AND && Operator
        cout<<"Entered number is divisible by 5 and 11"<<endl;
    }
    else{
        cout<<"Entered number is not divisible by 5 and 11"<<endl;
    }
    return 0;
}