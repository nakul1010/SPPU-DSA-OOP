#include<iostream>
using namespace std;

typedef void(*ptr)();	//imp pointer declaration

void display_1()
{
	cout<<"1st function called using fn ptr"<<endl;
}

void display_2()
{
	cout<<"2nd function called using fn ptr";
}

main()
{
	ptr p;	//ptr type pointer p
	p=&display_1;
	p();
	
	p=&display_2;
	p();
}
