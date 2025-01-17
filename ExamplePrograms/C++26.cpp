#include <iostream>
#include <string>
using namespace std;
int main(){
    string students[100];
    string searchfor= "Prince"; 
    int i;
    cout << "Enter 100 students' names:" << endl;
    for(i=0;i<100;i++) {
        cin >> students[i];
    }
    for(i = 0; i < 100; i++) {
        if(students[i] == searchfor) {
            cout <<"Name found:"<< students[i] << endl;
            break;
        }
    }
    if(i==100) {
        cout<<"Sorry ! Search not found !"<<endl;
    }
    return 0;
}

