//DPHBFE application
//ring buffer dequeue enqueue
//input restricted Queue
#include<iostream>
#define N 5
using namespace std;

class dequeue
{
	int q[N];
	int front;
	int rear;
	int no;
	public:
//-----------------------------------------------------------------
		dequeue()
		{
			front=-1;
			rear=-1;
		}
//-----------------------------------------------------------------
		void insert_rear()
		{
			if(front==(rear+1)%N)//imp
			{
				cout<<"\nDEqueue full!!\n";
				return;
			}
			cout<<"Enter no : ";
			cin>>no;
			if(front == -1)
				++front;
			rear=(rear + 1)%N;
			q[rear]=no;
		}
//------------------------------------------------------------------
/*		void insert_front()
		{
			if(front==(rear+1)%N)
			{
				cout<<"\nDEqueue full!!\n";
				return;
			}
			cout<<"Enter no : ";
			cin>>no;
			if(front == -1)
					++front;
			front=(front + 1)%N;
			q[front]=no;			
		}
*///------------------------------------------------------------------
		void delete_front()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"DEqueue Empty!!"<<endl;
				return;
			}
			if(front==rear)
			{
				front=(front+1)%N;//imp
				cout<<"\nNumber Deleted!!"<<endl;
				cout<<"All Numbers deleted now";
				front=-1;
				rear=-1;
				return;
			}
		
			front=(front+1)%N;
			cout<<"\nNumber Deleted!!"<<endl;
		}
//------------------------------------------------------------------
		void delete_rear()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"DEqueue Empty!!"<<endl;
				return;
			}
			if(front==rear)//IMP
			{
				rear=(rear-1)%N;
				cout<<"Number Deleted!!"<<endl;
				cout<<"All Numbers deleted now";
				front=-1;
				rear=-1;
				return;
			}
		
			rear=(rear-1)%N;
			cout<<"Number Deleted!!"<<endl;
		}
//------------------------------------------------------------------
		void display()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"DEqueue Empty!!"<<endl;
				return;
			}
		/*	if(front==rear)
			{
				cout<<"All Numbers deleted";
				front=-1;
				rear=-1;
				return;
			}
		*/
			int i;
			for(i=front;i!=rear;i=(i+1)%N)
			{
				cout<<"Number : "<<q[i]<<endl;
			}
			cout<<"Number : "<<q[i]<<endl;
		}
//------------------------------------------------------------------		
};

main()
{
	dequeue d;
	int op=-1;
	while(op!=0)
	{
		cout<<"\n\n1.Insert from rear";
	//	cout<<"\n2.Insert from front";
		cout<<"\n3.Delete from front";
		cout<<"\n4.Delete from rear";
		cout<<"\n5.Display";
		cout<<"\nEnter Choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				d.insert_rear();
			break;
			
			case 2:
				//d.insert_front();
			break;
			
			case 3:
				d.delete_front();
			break;
			
			case 4:
				d.delete_rear();
			break;
			
			case 5:
				d.display();
			break;
			
			default:
				op=0;
			break;
		}
	}
}
