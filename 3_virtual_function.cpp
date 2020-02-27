/*This code explains virtual fn if we don't declare virtual then by default base 
class fn will be called by the base class ptr for ambuiguity remember no ptr
for virtual ptr required
RUN TIME POLYMORPHISM A virtual fn a memeber fn which is declare within a base 
class and is redefine (overriden) by a derive class*/  
#include<iostream>
using namespace std;

class base
{
	public:
		virtual void display()
		{
			cout<<"This is Base Class"<<endl;
		}
};

class derive1 : public base
{
	public:
		void display()
		{
			cout<<"This is Derive class 1"<<endl;
		}
};

class derive2 :public base
{
	public:
		void display()
		{
		cout<<"This is Derive class 2"<<endl;
		}		
};


main()
{
	base *b;
	derive1 d1;
	derive2 d2;
	
	b = &d1;
	b->display();
	
	d1.base::display();
	
	b = &d2;
	b->display();
}
