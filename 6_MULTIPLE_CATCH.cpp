#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter a not between 1 to 3 : ";
	cin>>a;
	try
	{
		if(a==1)
			throw(10);
		if(a==2)
			throw(10.10);
		if(a==3)
			throw('a');
		cout<<"number : "<<a;
	}
	catch(int a)
	{
		cout<<a;
	}

	catch(double a)
	{
		cout<<a;
	}
	catch(char a)
	{
			cout<<a;
	}
}
