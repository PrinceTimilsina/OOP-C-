#include<iostream>
using namespace std;
class Sum{
    private:
    int a;
    public:
    int getData(){
        cout<<"Enter a number"<<endl;
        cin>>a;
        return 0;
    }
    Sum operator +(Sum bb){
        Sum cc;
        cc.a=a+bb.a;
        return cc;
    }

};

int main(){
    Sum aa,bb,cc;
    aa.getData();
    bb.getData();
    cc = aa+bb;
    cout<<"Sum is:"<<cc.a<<endl;
    return 0;
}