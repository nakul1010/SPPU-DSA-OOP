#include<iostream>
#define N 5
using namespace std;
class queue_1
{
	private:
		int front,rear,no;
		int q[N];
	public:
		queue_1()
		{
			front=-1;
			rear=-1;
		}
		
		void intialize()
		{
			front=-1;
			rear=-1;
		}
		
		void enqueue()
		{
			if(rear == N-1)
			{
				cout<<"\nQueue is Full!!";
				return;
			}
			cout<<"Enter no : ";
			cin>>no;

			if(front==-1)
			{
				++front;
				q[++rear]=no;
			}
			else
			{
				q[++rear]=no;
			}
		}
		
		void dequeue()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nQueue is Empty!!";
				return;
			}
			if(front == rear)
			{
				cout<<"All  Numbers Deleted!!";
			}
			++front;
			cout<<"\nNumber Deleted!!";
		}
		
		void print()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"\nQueue is Empty!!";
				return;
			}
			int i;
			for(i=front;i!=rear;i++)
			{
				cout<<"\nNumber : "<<q[i];
			}
			cout<<"\nNumber : "<<q[i];
		}
};

main()
{
	queue_1 q;
	int op=-1;
	while(op!=0)
	{
		cout<<"\n\n1-Intialize";
		cout<<"\n2-Enqueue";
		cout<<"\n3-Dequeue";
		cout<<"\n4-Print";
		cout<<"\n5-Exit";
		cout<<"\nEnter choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				q.intialize();
			break;

			case 2:
				q.enqueue();
			break;
			
			case 3:
				q.dequeue();
			break;
			
			case 4:
				q.print();
			break;
			
			case 5:
				op=0;
			break;
		}
	}
}
