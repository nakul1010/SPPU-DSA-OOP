#include<iostream>
#define N 6
using namespace std;
class sort{
	int a[N];
	int i,j,k,temp;
	public:
		void enter()
		{
			for(i=0;i<N;i++)
			{
				cout<<"Enter element "<<i+1<<" : ";
				cin>>a[i];
			}
		}
		
		void display()
		{
			cout<<"\n*******\n";
			for(i=0;i<N;i++)
			{
				cout<<i+1<<". number : "<<a[i]<<endl;
			}
		}
		
		void insertion_sort()
		{
			for(i=1;i<N;i++)
			{
				temp=a[i];
				for(j=i-1;j>=0&&a[j]>temp;j--)
				{
					a[j+1]=a[j];				
				}
				a[j+1]=temp;
			}
		}
};

main()
{
	sort s;
	s.enter();
	s.display();
	s.insertion_sort();
	s.display();
}
