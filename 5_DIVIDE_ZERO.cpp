#include<iostream>
using namespace std;

main()
{
	int a,b,c;
	cout<<"Enter a and b : ";
	cin>>a>>b;
	try
	{
		if(b==0)
			throw("Can't divide by zero'");
		cout<<"Division : "<<a/b;
	}
	catch(const char *s)//remember ptr
	{
		cout<<s;
	}
}
