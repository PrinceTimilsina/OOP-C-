#include <iostream>
using namespace std;
int main() {
    int n[100];
    int c=0;
    cout<<"Enter 100 numbers:"<<endl;
    for(int i = 0; i < 100; i++) {
        cin>>n[i];
    }
    for(int i = 0; i < 100; i++) {
        if(n[i] == 5) {
            c++;
        }
    }
    cout<<"The number 5 appears"<<c<<"Times 5 appeared"<<endl;
    return 0;
}

