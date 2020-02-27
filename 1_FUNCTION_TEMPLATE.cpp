#include<iostream>
using namespace std;

template<typename dt>
void add(dt a , dt b)
{
	dt c;
	c=a+b;
	//cout<<endl<<"ADDITION : "<<a+b;
	cout<<endl<<"ADDITION : "<<c;
}

main()
{
	cout<<"Integer addition \n";
	add(10,20);
	cout<<"\nFloating addition \n";
	add(0.3,0.1);
}
