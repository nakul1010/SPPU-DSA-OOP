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
	//node*root;
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
		void sort()
		{
			curr=root->next;
			prev=root;
			temp=root;
			while(curr!=NULL)
			{
						
			}		
		}
};
main()
{
	list l; 
	l.create();
	l.display();
	l.sort();
	l.display();
}
