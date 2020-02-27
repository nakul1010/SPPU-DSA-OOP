#include<iostream>
#define N 5
using namespace std;
class stack
{
	int s[N];
	int no,i,j;
	int top;
	public:
//-----------------------------------------------------
		stack()
		{
			top=-1;
		}
//-----------------------------------------------------	
		void push()
		{
			if(top==N-1)
			{
				cout<<"***Stack Full***";
				return;
			}
				cout<<"Enter no : ";
				cin>>no;
				s[++top]=no;
						
		}
//-----------------------------------------------------		
		void pop()
		{
			if(top==-1)
			{
				cout<<"***Stack Empty***";
				return;
			}
			s[top--];
			cout<<"Number deleted from top";
		}
//-----------------------------------------------------		
		void display()
		{
			int j;
			if(top==-1)
			{
				cout<<"Stack Empty";
				return;
			}	
			cout<<top<<endl;		
			for(j=top;j>=0;j--)
			{
				cout<<"Number : "<<s[j]<<endl;
			}
		}
//-----------------------------------------------------	
		void intialize()
		{
			top=-1;
			cout<<"Stack Intialize";	
		}	
};
main()
{
	stack s;
	int op=-1;
	while(op!=0)
	{
		cout<<"\n\n\n1.PUSH";
		cout<<"\n2.POP";
		cout<<"\n3.DISPLAY";
		cout<<"\n4.INTIALIZE";
		cout<<"\nEnter choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				s.push();
			break;
			
			case 2:
				s.pop();	
			break;
			
			case 3:
				s.display();
			break;

			case 4:
				s.intialize();
			break;
						
			default:
				op=0;
			break;
		}
	}
}
