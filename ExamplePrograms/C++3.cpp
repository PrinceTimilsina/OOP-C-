//Introducting Concept of OOP
#include<iostream>
using namespace std;
class sum{  //Class  , CLass is a template or user-defined datatype
	private:         //Access Modifier
		int a,b,c;  //Datamember
	public:
		int getData(){  //Methods or Function
			cout<<"Enter first number"<<endl;
			cin>>a;
			cout<<"Enter second number"<<endl;
			cin>>b;
			return 0;
		}
		void calculate()
		{
			c=a+b;
		}
		int display(){
			cout<<"The required output is"<<c<<endl;
			return 0;
		}
};
   int main()
   {
   	sum obj;      //Here in execution it operates on bottom to top approach
   	obj.getData();
   	obj.calculate();
   	obj.display();
   	return 0;        
   }
