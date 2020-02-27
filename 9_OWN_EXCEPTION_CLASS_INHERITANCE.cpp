#include<iostream>
using namespace std;
class example{
};
class child:public example{
};
main()
{
	for(int i=1;i<3;i++)
	{
		try
		{
			if(i==1)
				throw example();
			if(i==2)
				throw child();
		}
		catch (child d)
		{
			cout<<"CAUGHT CHILD"; //can' print d as obj << needs to overload
		}
		catch (example d)
		{
			cout<<"CAUGHT PARENT"<<endl; //both time as base class up if down then child too
		}		
	}
}
