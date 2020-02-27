#include<iostream>
using namespace std;
class test
{
	public:
		test()//special memeber fn of class,no return type,intialize obj automatically
		{
			cout<<"constructor called!!";	
		}	
		~test()
		{
			cout<<"\n\ndestructor called!!";
		}
};
main()
{
	test t;
}
