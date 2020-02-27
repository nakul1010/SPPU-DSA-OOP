//simple approach class temp that needs access of class base memeber and fn
//contains its object
#include<iostream>
using namespace std;
class base
{
	public:
		void print()
		{
			cout<<"Base class";
		}
};

class temp
{
	base b;
	public:
		temp()
		{
			b.print();
		}
};

main()
{
	temp t;
}
