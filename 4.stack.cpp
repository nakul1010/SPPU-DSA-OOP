//no iterator top is the iterator
#include<iostream>
#include<stack>
using namespace std;
class stacks
{
	stack<int>s1;

	public:
		void push()
		{
			int n;
			while(1)
			{
				cout<<"Enter Element : ";
				cin>>n;
				if(n==0)
					break;
				s1.push(n);
			}
		}
		
		void pop()
		{
			if(s1.size()==0)
			{
				cout<<"\nStack Empty";
				return;
			}
			cout<<"\nElement Deleted";
			s1.top();
			s1.pop();
		}
		
		void display()
		{
			if(s1.size()==0)
			{
				cout<<"\nStack Empty";
				return;
			}
			while(s1.size()!=0)//or empty
			{
				cout<<"\nElement : "<<s1.top();
				s1.pop();
			}
		}
};

main()
{
	stacks s;
	s.push();
	s.pop();
	s.display();
	s.display();
}
