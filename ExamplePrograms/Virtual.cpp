//C++ Program using virtual functions for finding area and perimeter of rectangle from entered length and breadth fromm user
#include<iostream>
using namespace std;

class Rect
   {
    public:
	int a,l,b;
		 
    virtual void setdata(int l,int b)
	{
    	this->l=l;
    	this->b=b;
	}
	
	virtual void calculate()
	{
		a=l*b;
	}
	
	virtual void display()
	{
		cout<<"Area="<<a<<endl;
	}
	
};

class Rect1:public Rect
    {
	private:
	int p;
	public:
	void calculate() override
	{
		p=2*(l+b);
	}
		
	void display()
	{
		cout<<"Perimeter="<<p<<endl;
	}
		
};
int main()
{
	Rect1 obj;
	Rect obj2;
	obj.setdata(5,5);//this set the data (length and breadth) for obj
	obj.calculate();
	
	obj.display();
	
//	Rect::calculate();
//	Rect::display();

    obj2.setdata(5, 5);//this set the data (length and breadth) for obj2
    obj2.calculate();
    obj2.display();
	return 0;
	
}
