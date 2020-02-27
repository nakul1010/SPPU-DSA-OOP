#include<iostream>
using namespace std;
class temp
{
	int count;
	public:
		temp(int count)
		{
			this->count=100;
			cout<<"\nThe value passed by obj is : "<<count;
			cout<<"\nThe value of count in THIS class is : "<<this->count;
		}	
};

main()
{
	temp t(99);
}
