#include<iostream>
#include<vector>
using namespace std;
class vectors
{
	vector<int>v1;
	vector<int>::iterator ptr;
	
	public:
		void push_back()
		{
			int n;
			while(1)
			{
				cout<<"Enter no : ";
				cin>>n;
				if(n==0)
				{
					break;
				}
				v1.push_back(n);
			}
		}
		
		void pop_back()
		{
			if(v1.size()==0)
			{
				cout<<"\nvector Empty!!\n\n";
				return;
			}
			cout<<"\nElement Deleted";
			v1.pop_back();
		}
		
		void display_iterator()
		{
			ptr=v1.begin();
			if(v1.size()==0)
			{
				cout<<"\nvector Empty!!\n\n";
				return;
			}
			for(;ptr!=v1.end();ptr++)
			{
				cout<<"\nElement : "<<*ptr;
			}
		}
};
main()
{
	vectors v;
	v.push_back();
	v.pop_back();
	v.display_iterator();
}

