#include<iostream>
using namespace std;
class Copy
{
	private:
			int k;
	public:
		
		Copy()
		{
			cout<<"Default Constructor is Called"<<endl;
			k=90;			
		}	
		
		Copy(const Copy&t)	//c1 taken by reference type of overloading
		{
			cout<<"Copy Constructor is Called"<<endl;
			k = t.k + 100;
		}
		
		void print()
		{
			cout<<k<<endl;
		}

};

main()
{
	Copy c1;
	Copy c2 = c1;//default constructor not called default copy constructor is called
	//if we not define copy constructor in class still the program will run as the 
	//default copy constructor will be called 
	c1.print();
	c2.print();
}
