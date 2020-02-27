#include<iostream>
using namespace std;

inline void display()
{
	cout<<"\nTHIS IS A INLINE FUNCTION"<<endl;
}

inline int add(int a,int b)
{
	return(a+b);
}

int main()
{
	cout<<"\n***INLINE PROGRAM***"<<endl;
	display();
	int c;
	c=add(10,20);
	cout<<"\nADDITION : "<<c;
}
