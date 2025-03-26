#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Function of class A" << endl;
    }
};

class B : virtual public A {
public:
    void show() {
        cout << "Function of class B" << endl;
    }
};

class C : virtual public A {
public:
    void show() {
        cout << "Function of class C" << endl;
    }
};

class D : public B, public C {
public:
    void show() {
        cout << "Function of class D" << endl;
    }
};

int main() {
    D obj;
    
    obj.show();  // Calls the show() of class D

    return 0;
}
