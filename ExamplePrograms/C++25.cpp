#include <iostream>
using namespace std;
int main() {
    int n[100];
    int c=0;
    cout<<"Enter 100 numbers:"<< endl;
    for(int i = 0; i < 100; i++) {
        cin >> n[i];
    }
    
    for(int i=0;i<100;i++) {
        if(n[i] < 50) {
            c++;
        }
    }
    cout<< "The total number of values below 50 are: "<<c<<" "<<endl;
    return 0;
}

