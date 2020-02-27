#include<iostream>
using namespace std;

main()
{
	int abc=500;
	int nap=100;
	int & sap = nap;
	int & xyz = abc;
	cout<<"\nABC = "<<abc<<"\tXYZ = "<<xyz;

	xyz=99;
	cout<<"\nABC = "<<abc<<"\tXYZ = "<<xyz;
	cout<<"\nNAP = "<<nap<<"\tSAP = "<<sap;

	sap=33;
	cout<<"\nNAP = "<<nap<<"\tSAP = "<<sap;
}
