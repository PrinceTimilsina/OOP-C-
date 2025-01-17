#include<iostream>
using namespace std;
class area{ //creating a class
	private:  //access modifier
		int a,l,b;//data member
	public:
		int getvalue(){  //asking for the value of length and breadth
			cout<<"Enter the length of rectangle"<<endl;
			cin>>l;
			cout<<"Enter the breadth of rectangle"<<endl;
			cin>>b;
			return 0;
		}
		void calculate(){
			a=l*b;
		}
		int display(){
			cout<<"The required area of rectangle is;"<<a<<endl;
			return 0;
		}
};
  int main(){
     area obj; //Object
     obj.getvalue();//Calling the function
     obj.calculate();
     obj.display();
     return 0;
  }
