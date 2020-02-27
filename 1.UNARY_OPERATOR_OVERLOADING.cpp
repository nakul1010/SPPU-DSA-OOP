#include<iostream>
using namespace std;
class test
{
	private:
		int a,b,c;
	public:		
		test()
		{
			a=1;
			b=2;
			c=3;
		}

		void display()
		{
			cout<<"\n\na = "<<a<<"\nb = "<<b<<"\nc = "<<c;
		}
		
		friend test operator ++ (test&t);
		//can write void instead of test
		/*
		without friend function =  
		test operator ++()
		{
			++a;
			++b;
			++c;		
		}
		*/
		void operator - ()//can write test instead of void
		{
			--a;
			--b;
			--c;
		}		
};

test operator ++ (test&t) //call by ref
{
	++t.a;
	++t.b;
	++t.c;
}

main()
{
	test t1;
	t1.display();
	++t1;
	t1.display();
	-t1;
	t1.display();
}
