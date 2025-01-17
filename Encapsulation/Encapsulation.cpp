//Write a program that demonstrates the use of access specifiers to achieve encapsulation.
//Simple C++ Program to find area of rectangle
#include<iostream>
using namespace std;
class Area{  
	private:
		int l,b,a;
	public:
		void getdata(int l,int b){
			this->l=l;
			this->b=b;
		}
		void calculate(){
			a=l*b;
		}    
		void display(){      
			cout<<"Area of Rectangle is:"<<a;
		}
};

int main(){
	Area obj;
	obj.getdata(4,5);
	obj.calculate();
	obj.display();
	return 0;
}
