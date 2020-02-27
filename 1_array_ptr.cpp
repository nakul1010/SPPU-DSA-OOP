#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int a[5]={10,20,30,40,50};
	int *p;
	p=a;	//IMP
	for(int i=0;i<5;i++)
	{
		cout<<"*p(value) = "<<*p<<endl;
		sum=sum+*p;
		p++;	//IMP
	}
	cout<<endl<<"SUM : "<<sum<<endl;
	return 0;
}
