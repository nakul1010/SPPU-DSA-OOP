#include<iostream>
using namespace std;
main()
{
	int a1[30];
	int n,i,e,loc;
	cout<<"Enter size of array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element in array : ";
		cin>>a1[i];	
	}
	//display
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Element : "<<a1[i];
	}
	//insertion
	cout<<"\nEnter element to insert and its location : ";
	cin>>e>>loc;
	//create space for it
	for(i=n-1;i>=loc;i--)
		a1[i+1]=a1[i];
	n++;//remember if before than i=n-2
	a1[loc]=e;
	//again display
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Element : "<<a1[i];
	}
}
