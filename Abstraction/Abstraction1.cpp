#include<iostream>
using namespace std;
class abstract{
	private:
		int a,b;
	public:
//		void set(int x,int y){
//			a=x;
//			b=y;
//		}
void set(int a,int b){
	this->a=a;
	this->b=b;
}
	   void display() {
	   cout<<"Value entered in a is:"<<a<<endl;
	   cout<<"Value entered in b is:"<<b<<endl;
	   }
};
int main(){
  abstract obj;
  obj.set(12,10);
  obj.display();
  return 0;
}
