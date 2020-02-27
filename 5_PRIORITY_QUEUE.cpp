#include<iostream>
#define N 5
#define P 5
using namespace std;

class queue
{
	private:
		int q[N][P];
		int front , rear;
		int n,prior;
		int i,j,k;
	public:
//---------------------------------------------------------------------
		queue()
		{
			front = -1;
			rear  = -1;
		}
//---------------------------------------------------------------------		
		void bubble_sort()
		{

			int i,j;
			float temp1,temp2;
			for(i=front;i<rear;i++)
			{
				for(j=front;j<rear;j++)
				{
					if(q[j+1][1]>q[j][1])
					{
						temp1=q[j+1][0];
						q[j+1][0]=q[j][0];
						q[j][0]=temp1;
						
						temp2=q[j+1][1];
						q[j+1][1]=q[j][1];
						q[j][1]=temp2;
					}
				}
			}

			//display
/*
			cout<<"\n";
			for(i=front;i!=rear;i=(i+1)%N)
			{
				cout<<"NUMBER & PRIORITY : "<<q[i][0]<<"  "<<q[i][1]<<endl;
			}
			cout<<"NUMBER : "<<q[i][0]<<"  "<<q[i][1]<<endl;
*/
		}
//---------------------------------------------------------------------				
		void insert_no()
		{
			while(1)
			{
				if(front==(rear+1)%N)
				{
					cout<<"queue full";
					return;
				}
				else
				{
					cout<<"Enter the no & priority : ";
					cin>>n>>prior;
					if(n==0)
					{
						return;
					}
					if(front==-1)
					{
						++front;
					}
					rear=(rear+1)%N;
					q[rear][0]=n;
					q[rear][1]=prior;			
				}//Bubble called from switch  since then whole Queue will be sort
			}	
		}
//---------------------------------------------------------------------		
		void delete_no()
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
				cout<<"All Nos Deleted!!";
				return;
			}
			front=(front+1)%N;			
			cout<<"No. DELETED"<<endl;
		}
//---------------------------------------------------------------------		
		void display()
		{
			int i,j;
			if(rear==-1||front==-1)
			{
				cout<<"queue is empty";
				return;
			}
			
			for(i=front;i!=rear;i=(i+1)%N)
			{
				cout<<"NUMBER : "<<q[i][0]<<endl;
			}
			cout<<"NUMBER : "<<q[i][0];
		}
//---------------------------------------------------------------------
};

int main()
{
	queue q1;
	
	int op=-1;
	
	while(op!=0)
	{
		cout<<"\n\n1.INSERT NO.s";		
		cout<<"\n2.DELETE NO.";		
		cout<<"\n3.DISPLAY NO.s";		
		cout<<"\n4.EXIT";
		
		cout<<"\n\nEnter Choice ";
		cin>>op;
		
		switch(op)
		{
			case 1:
				q1.insert_no();
				q1.bubble_sort();
			break;
			
			case 2:
				q1.delete_no();
			break;
			
			case 3:
				q1.display();
			break;
			
			case 4:
				op=0;
			break;
		}
	}
	return 0;
}
