//Exampl program of Hierarchical inheritance
#include<iostream>
using namespace std;
class Rect{
    protected:
    int p,a,l,b;
    public:
    int setData(int l,int b){
        this->l=l;
        this->b=b;
        return 0;
    }
};
class area:public Rect{
    public:
    int calculateArea(){
        a=l*b;
        cout<<"Area of Rectangle is:"<<a<<endl;
        return 0;
    }
};

class perimeter:public Rect{
    public:
    int calculateperimeter(){
     p=2*(l+b);
     cout<<"Perimeter of Rectangle is:"<<p<<endl;
      return 0;
    }
};

int main(){
    area obj;
    perimeter obj1;
    obj.setData(5,6);
    obj.calculateArea();
    obj1.setData(5,6);
    obj1.calculateperimeter();
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
