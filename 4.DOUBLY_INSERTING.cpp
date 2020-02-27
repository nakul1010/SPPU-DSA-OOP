#include<iostream>
using namespace std;
class node
{
	int no;
	node*next;
	node*back;
	public:
		friend class list;
};
class list
{
	node*root;
	node*curr;
	node*prev;
	node*temp;
	node*end;
	public:
	list()
	{
		root=NULL;
		curr=NULL;
		prev=NULL;
		temp=NULL;
		end=NULL;
	}
//--------------------------------------
	void create()
	{
		while(1)
		{
			curr = new node;
			cout<<"Enter no : ";
			cin>>curr->no;
			if(curr->no == 0)
				break;
			curr->next=NULL;
			if(root == NULL)
			{
				root=curr;
				prev=curr;
				end=curr;
			}
			else
			{
				prev->next=curr;
				curr->back=prev;
				prev=curr;
				end=curr;
			}
		}
	}
//--------------------------------------
	void display()
	{
		curr=root;
		cout<<"\n";
		while(curr!=NULL)
		{
			cout<<curr->no<<"  ";
			curr=curr->next;
		}
		cout<<"NULL";
	}
//--------------------------------------
	void insert()
	{
		int loc,number,i;
		cout<<"\n\nEnter location & number : ";
		cin>>loc>>number;
		curr=root;
		prev=root;
		if(loc == 1)
		{
			curr=new node;
			curr->next=root;
			curr->back=NULL;
			curr->no=number;
			root=curr;
			return;
		}	
		for(i=1;i<loc;i++)
		{
			prev=curr;
			curr=curr->next;
			if(curr==NULL)
			{
				cout<<"\nLocation Not Found";
				return;
			}
		}
	//	cout<<curr->no<<endl;
	//	cout<<prev->no<<endl;
		temp=curr;
		curr=new node;
		curr->no=number;
		curr->next=temp;
		curr->back=prev;
		prev->next=curr;
		temp->back=curr;
	}
//--------------------------------------		
};
main()
{
	list l;
	l.create();
	l.display();
	l.insert();
	l.display();
}
