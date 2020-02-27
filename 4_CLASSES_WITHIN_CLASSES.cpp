#include<iostream>
using namespace std;

class outer
{
	public:
		void display()
		{
			cout<<"This Is Outer Class"<<endl;
		}
		class inner
		{
			public:
				void display()
				{
				cout<<"This Is Inner Class"<<endl;	
				}	
		};
};

main()
{
	outer::inner i;
	outer o;
	i.display();
	o.display();
}
