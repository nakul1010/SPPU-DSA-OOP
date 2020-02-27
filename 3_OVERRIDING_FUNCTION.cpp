#include<iostream>
using namespace std;

class a
{
	public:
		void fn()
		{
			cout<<"Parent"<<endl;
		}
};

class b : public a
{
	public:
		void fn()
		{
			cout<<"Child"<<endl;
		}		
};

main()
{
	b obj;
	obj.fn(); //parmeters of override function should be same
			  //if fn in not derive class then base class fn will be called
	obj.a::fn();
}
