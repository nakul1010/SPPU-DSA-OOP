#include<iostream>
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
			curr->no=number;
			root=curr;
			return;
		}
		for(i=1;i<loc;i++)
		{
			prev=curr;
			curr=curr->next;//curr will go to the loc node if loc=3 then curr
							// will go on 3 and prev will beon 2 node
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
		prev->next=curr;
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
