//used to remove ambuiguity,compuiler takes care of duplicate members
#include<iostream>
using namespace std;
class base
{
	public:
		int i;
};

class derive_1 : virtual public base
{
	public:
		int j;
};

class derive_2 : virtual public base
{
	public:
		int k;
};

class derive_3 : public derive_1,public derive_2
{
	public:
		int multiply;
};

main()
{
	derive_3 obj;
	obj.i=10;
	obj.j=20;
	obj.k=30;
	obj.multiply = obj.i + obj.j + obj.k;
	cout<<"\ni = "<<obj.i;
	cout<<"\nj = "<<obj.j;
	cout<<"\nk = "<<obj.k;
	cout<<"\nMultiply = "<<obj.multiply;
}
