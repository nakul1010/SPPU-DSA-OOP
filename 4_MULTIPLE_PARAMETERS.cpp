#include<iostream>
using namespace std;

template<class dt1 , class dt2>
class example
{
	public:
		void display(dt1 a , dt2 b)
		{
			cout<<endl<<a<<"  "<<b;	
		}	
};
main()
{
	example<int , float>obj1;
	obj1.display(100,20.5);
	
	example<char[] , float>obj2;
	obj2.display("MESSAGE",1.23);
}
