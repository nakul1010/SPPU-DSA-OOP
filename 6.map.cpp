//insertpair erasefind(remove)
#include<iostream>
#include<map>
using namespace std;
class maps
{
		map<int,int>m1;
		map<int,int>::iterator ptr;
	public:
		void insert()
		{
			int n,k;
			while(1)
			{
				cout<<"enter key & value: ";
				cin>>k>>n;
				if(n==0 && k==0)
					return;
				m1.insert(pair<int,int>(k,n));
			}
		}
		
		void erase()
		{
			int remove;
			map<int,int>m2(m1.begin(),m1.end());
			ptr=m2.begin();
			for(;ptr!=m2.end();ptr++)
			{
				cout<<"key : "<<ptr->first<<" value : "<<ptr->second<<endl;
			}
			cout<<"Enter the key to remove : ";
			cin>>remove;
			m2.erase(m2.begin(),m2.find(remove));
			for(ptr=m2.begin();ptr!=m2.end();ptr++)
			{
				cout<<"key : "<<ptr->first<<"    value : "<<ptr->second<<endl;
			}	
		}	
		
		void display()
		{
			if(m1.size()==0)
			{
				cout<<"Map Empty!!";
				return;
			}
			ptr=m1.begin();
			for(;ptr!=m1.end();ptr++)
			{
				cout<<"key : "<<ptr->first<<" value : "<<ptr->second<<endl;
			}//not*ptr
		}
};

main()
{
	maps m;
	int op=-1;
	while(op!=0)
	{
		cout<<"\n\n1.insert";
		cout<<"\n2.erase";
		cout<<"\n3.display";
		cout<<"\n4.exit";	
		cout<<"\nEnter choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				m.insert();
			break;

			case 2:
				m.erase();
			break;
			
			case 3:
				m.display();
			break;
			
			case 4:
				op=0;
			break;			
		}
	}	
}
