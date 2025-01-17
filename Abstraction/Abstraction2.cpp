#include<iostream>
using namespace std;
class Area{
	private:
		int a,l,b;
	public:
		void getdata(int len,int bre){
		 l=len;
		 b=bre;
		}
	    void calculate(){
	    	a=l*b;
		}
		void display(){
			cout<<"The required area of rectangle is :"<<a<<endl;
		}
};
int main(){
	Area obj;
	obj.getdata(12,10);
	obj.calculate();
	obj.display();
	return 0;
}

