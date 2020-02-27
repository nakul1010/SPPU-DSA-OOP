#include<iostream>
using namespace std;
class binnum
{
	int no;
	binnum*next;
	binnum*back;
	public:
		friend class list;
};
class list
{
	binnum*root;
	binnum*curr;
	binnum*prev;
	public:
		list()
		{
			root=NULL;
			curr=NULL;
			prev=NULL;
		}
		void create()
		{
			while(1)
			{
				curr = new binnum;
				cout<<"Enter no : ";
				cin>>curr->no;
					if(curr->no == 0)
						break;
				curr->next=NULL;
				curr->back=NULL;
				if(root == NULL)
				{
					root=curr;
					prev=curr;
				}
				else
				{
					prev->next=curr;
					curr->back=prev;
					prev=curr;
				}
			}
		}
		
		void display()
		{
			cout<<"\n";
			curr=root;
			while(curr!=NULL)
			{
				cout<<curr->no<<"  ";
				curr=curr->next;
			}
		}
		
		void delete_no()
		{
			binnum*temp;
			temp=NULL;
			int del;
			cout<<"\nEnter no u want to delete : ";
			cin>>del;
			curr=root;
			while(curr!=NULL)
			{
				if(curr->no == del)
				{
					if(curr==root)
					{
						root=root->next;
						curr=root;
						return;
					}
					prev->next=curr->next;
					temp=curr->next;
					delete curr;
					curr=temp;
					curr->back=prev;
					//dont increment current to next ie curr=curr->next
				}
				else
				{
					prev=curr;
					curr=curr->next;
				}
			}
		}
};

main()
{
	list l;
	l.create();
	l.display();
	l.delete_no();
	l.display();
}
