#include <iostream>
using namespace std;
int main(){
    string school[10] = {
        "Prince",
        "Rachin",
        "Dravid",
        "Shikhar",
        "Steven",
        "Novel",
        "Daniel",
        "Alejandro",
        "James",
        "Cilian"
    };
    cout << "Students in the school are:" << endl;
    for(int i = 0; i < 10; i++) {
        cout<<school[i]<<endl;
    }

    return 0;
}

