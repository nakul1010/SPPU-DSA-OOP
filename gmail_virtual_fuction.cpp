#include<iostream>
using namespace std;

class water
{
	
	public:
//if we declare VIRTUAL VOID STATE()=0 then tropical t1 will not work as it will also
//need VOID STATE() fn
		virtual void state() //if not virtual each time flows
		{
			cout<<"Flows"<<endl;
		}
};

class desert : public water
{
	public:
		void state()	//overriding fn state remains same
		{
			cout<<"Becomes Vapour"<<endl;
		}		
}; 

class artic : public water
{
	public:
		void state()
		{
			cout<<"Becomes Ice"<<endl;
		}		
};

class tropical : public water
{
	public:
};

main()
{
	water * ptr;
	desert d1;
	ptr = &d1;
	ptr -> state(); //ptr type that class fn will be called Flows
					//without virtual
	artic a1;
	ptr = &a1;
	ptr -> state();	

	tropical t1;
	ptr = &t1;
	ptr -> state();
}
