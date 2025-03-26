#include <iostream>
using namespace std;
int main() {
    int a=1,b=1,c,n,i;
    cout<<"Enter no.of terms";
    cin>>n;
    cout<<a<<"  ";
    cout<<b<<"  ";
    for (i=3;i<=n;i++)
	{
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}

