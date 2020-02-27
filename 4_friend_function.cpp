#include<iostream>
using namespace std;
class xyz;	 //MOST IMP
class abc
{
	private:
		int a;
	public:
	abc()
	{
		a=100;	
	}	
	friend void myfunction(abc , xyz);
};

class xyz
{
	private:
		int b;
	public:
	xyz()
	{
		b=100;	
	}	
	friend void myfunction(abc , xyz);
};

void myfunction(abc obj1 , xyz obj2)
{
	int sum;
	sum=obj1.a+obj2.b;
	cout<<endl<<"SUM : "<<sum;
}

main()
{
	abc obj1;
	xyz obj2;
	
	myfunction(obj1 , obj2);//called without obj name
}

