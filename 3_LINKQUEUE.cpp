#include<iostream>
#define N 5
using namespace std;
class node
{
	int no;
	node*next;
	public:
		friend class list;
};
class list
{
	int size;
	node*front;
	node*rear;
	node*temp;
	int val;
	public:
		list()
		{
			size=0;
			front=NULL;
			rear=NULL;
			temp=NULL;
		}
//---------------------------------------------------------------		
		void insert()
		{
			if(size == N)
			{
				cout<<"Queue Full";
				return;
			}
			cout<<"Enter no : ";
			cin>>val;
			size++;
			if(rear == NULL)
			{
				rear = new node;
				rear->next = NULL;
				rear->no = val;
				front=rear;
			}
			else
			{
				temp = new node;
				rear->next=temp;
				temp->no = val;
				temp->next=NULL;
				rear=temp;
			}
		}
//---------------------------------------------------------------
		void delete_()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<"\nQUEUE EMPTY!!";
				return;
			}
			if(size == 0)
			{
				cout<<"\nQUEUE EMPTY!!";
				intialize();
				return;				
			}
			temp=front;
			temp=temp->next;
			delete front;
			front=temp;
			cout<<"Element Deleted!!";
			size--;			
		}		
//---------------------------------------------------------------
		void display()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<"\nQUEUE EMPTY!!";
				return;
			}
			temp=front;
			while(temp!=NULL)
			{
				cout<<temp->no<<"  ";
				temp=temp->next;	
			}
			cout<<"\n";
		}
//---------------------------------------------------------------
		void intialize()
		{
			size=0;
			front=NULL;
			rear=NULL;
			temp=NULL;			
		}
//---------------------------------------------------------------
};

main()
{
	list l;
	int op=-1;
	while(op!=0)
	{
		cout<<endl<<"\n1.INSERT";
		cout<<endl<<"2.DELETE";
		cout<<endl<<"3.DISPLAY";
		cout<<endl<<"4.INTIALIZE";
		cout<<endl<<"5.EXIT";

		cout<<endl<<"Enter Choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				l.insert();			
			break;
			
			case 2:
				l.delete_();
			break;
			
			case 3:
				l.display();
			break;

			case 4:
				l.intialize();
			break;
						
			case 5:
				op=0;
			break;
		}
	}
}
