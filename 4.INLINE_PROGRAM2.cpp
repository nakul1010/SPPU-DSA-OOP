#include<iostream>
using namespace std;

class temp
{
	float a,b,c,d;
	public:	
	inline void mult()
	{
		cout<<"Enter a and b : ";
		cin>>a>>b;
		cout<<a*b<<endl;
		for(a=0;a<10;a++)
			cout<<a<<endl;
	}
	inline void cube()
	{
		cout<<"Enter a : ";
		cin>>a;
		cout<<a*a*a<<endl
		;
	}
};
main()
{
	temp t;
	t.mult();
	t.cube();
}
