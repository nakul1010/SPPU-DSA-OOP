#include<iostream>
using namespace std;
main()
{
	int*ptr;
	ptr=new int;
	*ptr=123;
	cout<<*ptr<<endl;
	delete ptr;
	cout<<*ptr;//no 123 address
}
