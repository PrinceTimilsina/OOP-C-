//Write a program that create two different classes i.e. Rectangle and Triangle.the calculate() as a method name then find volume and areaintroducing complete time polymorphism.
#include <iostream>
using namespace std;
class Shape{
private:
    int l,b,h,a;
    float v;
public:
    int calculate(int b,int h) {
        this->b=b;
        this->h=h;
       a=0.5*b*h;
        cout<<"Area of Triangle is:"<<a<<endl;
        return 0;
    }
   int calculate(float l, float b, float h) {
    this->l=l;
    this->b= b;
    this->h= h;
    v=l*b*h;
    cout<<"Volume of Cuboid is:"<<v<<endl;
    return 0;
    }
};
int main() {
    Shape shp;
    shp.calculate(6, 4); //--for triangle
    shp.calculate(5, 4, 3);  //--for cuboid  
    return 0;
}


