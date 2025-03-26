#include <iostream>
using namespace std;
class A
 {
public:
    void show()
     {
        cout<<"class A"<<endl;
    }
};

class B 
{
public:
    void show()
     {
        cout<<"class B"<<endl;
    }
};

class C :public A,public B {
    public:
    void show()
     {
        cout<<"class C"<<endl;
    }
};

int main() {
    C obj;

    // Resolving ambiguity using scope resolution operator
    obj.A::show();  // Calls show() of class A
    obj.B::show();  // Calls show() of class B
    obj.show();    // Calla show() of class C
    return 0;
}
