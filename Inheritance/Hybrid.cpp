//WAP that introduce the concept of hybrid inheritance using following classes: A,B,C,D,E;
//Here class E is derived from class C and class A,and class D is derived from Class A and class B.
#include<iostream>
using namespace std;
class A{ 
    public:
 int showclassA(){
     cout<<"I am Class A"<<endl; 
     return 0;
 }
};

class C:public A{
    public:
    int showclassC(){
        cout<<"I am class C"<<endl;
        return 0;  
    }
};

class E:public C{
    public:
    int showclassE(){
        cout<<"I am class E"<<endl;
        return 0;
    }
};

class B{
    public:
    int showclassB(){
        cout<<"I am class B"<<endl;
        return 0;
    }
};

class D: public A, public B{
    public:
    int showclassD(){
        cout<<"I am class D"<<endl;
        return 0;
    }
};

int main(){
    D obj;
    E obj1;
    obj.showclassA();
    obj.showclassB();
    obj.showclassD();
    obj1.showclassC();
    obj1. showclassE();
    return 0;
}



















































