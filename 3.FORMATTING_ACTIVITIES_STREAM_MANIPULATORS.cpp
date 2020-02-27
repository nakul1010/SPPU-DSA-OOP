#include<iostream>
#include<iomanip>	//IMP
using namespace std;

main()
{
	cout<<"\nTHIS IS ON THE NEXT LINE";
	cout<<"\n\tTHIS IS WIDTH TAB"<<endl;
	cout<<setw(40)<<"THIS IS AFTER 40 SPACES\n";
	cout<<setfill('+')<<setw(50);	//imp
	float f=10.3333;
	cout<<"\nFLOATING VALUE = "<<setprecision(3)<<f;
}
