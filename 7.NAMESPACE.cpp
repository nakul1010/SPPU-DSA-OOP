#include<iostream>
using namespace std;

namespace my_namespace1
{
	void print()
	{
		cout<<endl<<"This is NAMESPACE 1"<<endl;
	}
}
//no semicolon at last like class
namespace my_namespace2
{
	void print()
	{
		cout<<endl<<"This is NAMESPACE 2"<<endl;
	}
}

main()
{
	my_namespace1::print();
	my_namespace2::print();
}
