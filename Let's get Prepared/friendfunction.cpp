#include <iostream>
using namespace std;

class Sample {
    int num;

public: 
    void setData(int n) 
	{
        num = n;
    }

    friend void showData(Sample obj);
};

void showData(Sample obj) {
    cout << "Number: " << obj.num << endl;
}

int main() {
    Sample obj1;
    obj1.setData(10);
    showData(obj1);
    return 0;
}
