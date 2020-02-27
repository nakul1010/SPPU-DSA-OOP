#include<iostream>
using namespace std;
class example{
};
main()
{
	try
	{
		throw example();
	}
	catch (example d)
	{
		cout<<"CAUGHT";
	}
}
