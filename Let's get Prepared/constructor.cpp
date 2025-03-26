#include <iostream>
using namespace std;

class Sample {
    int num;

public:
    Sample() {  // Constructor
        num = 10;
    }

    void showData() {
        cout << "Number: " << num << endl;
    }
};

int main() {
    Sample obj1;
    obj1.showData();
    return 0;
}
