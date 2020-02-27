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
	//deletion
	cout<<"\n\nEnter no to delete : ";
	cin>>e;
	for(i=0;i<n;i++)
	{
		if(a1[i]==e)
			loc=i;
	}
	//cout<<loc;
	for(i=loc+1;i<n;i++)
	{
		a1[i-1]=a1[i];//imp
	}
	n--;
	//display
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Element : "<<a1[i];
	}
}
