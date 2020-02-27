//dt as Genric Datatype
#include<iostream>
using namespace std;

template<class dt>
class arithmatic
{
	private:
		dt a,b;
	public:	
		void get_data()
		{
			cout<<"Enter values of a and b : ";
			cin>>a>>b;
		}
		
		void calculate()
		{
			cout<<"\nADDITION : "<<a+b;
			cout<<"\nSUBTRACTION : "<<a-b;
			cout<<"\nMULTIPLICATION : "<<a*b<<endl;
		}
};

main()
{
	cout<<endl<<"INTEGER"<<endl;
	arithmatic<int>obj1;
	obj1.get_data();
	obj1.calculate();
	
	cout<<endl<<"FLOAT"<<endl;
	arithmatic<float>obj2;
	obj2.get_data();
	obj2.calculate();
}
