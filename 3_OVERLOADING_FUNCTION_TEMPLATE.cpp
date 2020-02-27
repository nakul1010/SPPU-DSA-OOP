//1st preference will be given to fun not template fun
#include<iostream>
using namespace std;

template<typename dt>
void print(dt a)
{
	cout<<"\nThis is template function  "<<a;
}

void print(int a)
{
	cout<<"\nThis is normal function  "<<a;
}

main()
{
	print(10);
	print("message");
	print(10.21);
	//print(20,29);
}
