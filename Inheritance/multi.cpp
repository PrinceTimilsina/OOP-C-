#include<iostream>
using namespace std;

class Rect1{
	public:
		int l,b,a1;
	int setdata(int l,int b){
		this->l=l;
		this->b=b;
		return 0;
	}
};

class Rect2{
     public:
		int l2,b2,a2;
		int setdata1(int l2,int b2){
			this->l2=l2;
			this->b2=b2;
			return 0;
		}
};

class Area:public Rect1,public Rect2{
	public:
		int Area1(){
			a1=l*b;
			return 0;
		}
		int Area2(){
			a2=l2*b2;
		return 0;
		}
};

int main(){
	Area obj;
	obj.setdata(5,6);
	obj.Area1();
	obj.setdata1(2,3);
	obj.Area2();
	return 0;

}
