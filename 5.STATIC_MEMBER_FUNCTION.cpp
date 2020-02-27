#include<iostream>
using namespace std;

class temp
{
	private:
		static int count;
		int a;
	public:
		void fun1()
		{
			a=10;
			cout<<"\nNORMAL MEMBER FUNCTION"<<endl;
			cout<<"a = "<<a<<endl;
		}
		
		static void fun2()
		{
			count=99;
			cout<<"\nSTATIC FUNCTION"<<endl;
			cout<<"count = "<<count<<endl;
		//	cout<<"a = "<<a<<endl; ERROR AS ITS NOT STATIC
		for(int i=0;i<10;i++)
			cout<<i<<"  "<<++count<<endl;
		//we can declare variables inside the static fun and access it
		//but we can't access the outside variable of the class
		}
};

int temp::count;

main()
{
	temp t;
	t.fun1();
	temp::fun2();//call the fun with the help of the class name & scope resolution op
	//we can call static member function even if object of class doesn't exist.
}

