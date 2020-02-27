//remember == in if
#include<iostream>
#include<conio.h>
#define N 5	
using namespace std;

class osqueue
{
	private:
		int q[N];
		int front , rear;	
	public:
		osqueue()
		{
			front = -1;
			rear  = -1;
		}
		
		void insert()
		{
			int n;
			if(front==(rear+1)%N)	//IMP
			{
				cout<<"queue full";
				return;
			}
			else
			{
				cout<<"enter the  no : ";
				cin>>n;
				if(front==-1)
				{					
					++front;
				}
				rear=(rear+1)%N;
				q[rear]=n;	
			}			
		}
		
		void delete_()
		{
			if(rear==-1&&front==-1)
			{
				cout<<"queue is empty";
				return;
			}			
			if(front==rear)
			{
				front=-1;
				rear=-1;
				cout<<"Queue empty!!";
				return;
			}
			front=(front+1)%N;
			cout<<"No. Deleted"<<endl;
		}
		
		void display()
		{
			int i,j;
			if(rear==-1 || front==-1)
			{
				cout<<"queue is empty";
				return;
			}
			
			for(i=front;i!=rear;i=(i+1)%N)
			{
				cout<<"no is : "<<q[i]<<endl;
			}
			cout<<"no is : "<<q[i];
		}
};

main()
{
	osqueue q1;
	
	int op=-1;

	while(op!=0)
	{
		cout<<"\n\n1.INSERT";
		
		cout<<"\n2.DELETE";
		
		cout<<"\n3.DISPLAY";
		
		cout<<"\n4.EXIT";
			
	 	cout<<"\n\nenter choice ";
	 	cin>>op;
	 	
	 	switch(op)
	 	{
	 		case 1:
				q1.insert();	
			break;
			
			case 2:
				q1.delete_();
			break;
			
			case 3:
				q1.display();
			break;		
				
			case 4:
				op=0;
			break;	
	 	}
	}		
}
