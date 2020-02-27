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
	node*end;
	node*temp;
	public:
		list()
		{
			root=NULL;
			prev=NULL;
			curr=NULL;
			end=NULL;
			temp=NULL;
		}
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
		void display()
		{
			
			curr=root;
			cout<<"\n";
			while(curr!=NULL)
			{
				cout<<curr->no<<"  ";
				curr=curr->next;
			}
		}
		void reverse()
		{
			prev=root;
			curr=root->next;
			temp=curr->next;
			while(curr!=NULL)//imp
			{
				if(prev == root)
				{
					curr->next=prev;
					prev->next=NULL;//imp
				}
				else
				{
					curr->next=prev;
				}
				prev=curr;
				curr=temp;
				if(temp)
					temp=temp->next;
			}
			//display
			root=prev;
			curr=root;
			cout<<"\n";
			while(curr!=NULL)
			{
				cout<<curr->no<<"  ";
				curr=curr->next;				
			}
		}
};
main()
{
	list l; 
	l.create();
	l.display();
	l.reverse();
//	l.display();
}
