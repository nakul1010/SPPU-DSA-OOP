#include<iostream>
using namespace std;
class array
{
	int coeff1[10];
	int coeff2[10];
	int coeff3[10];
	int expo1[10];
	int expo2[10];
	int expo3[10];
	int n1;
	int n2;
	int n3;
	int i,k,j;
	public:
//-----------------------------------------------------
		array()
		{
			cout<<"\nEnter no of terms for 1st polynomial : ";
			cin>>n1;
			cout<<"\nEnter no of terms for 2nd polynomial : ";
			cin>>n2;			
		}
//-----------------------------------------------------
		void enter()
		{
			cout<<"For 1st Polynomial\n";
			for(i=0;i<n1;i++)
			{
				cout<<"Enter coeff and expo ";
				cin>>coeff1[i]>>expo1[i];
			}
			cout<<"\nFor 2nd Polynomial\n";
			for(j=0;j<n2;j++)
			{
				cout<<"Enter coeff and expo ";
				cin>>coeff2[j]>>expo2[j];
			}			
		}
//-----------------------------------------------------
		void add()
		{
			k=0;
			i=0;
			j=0;
			n3=0;
			for(i=0;i<n1;)
			{
			//	if(i == n1)
			//		break;
				if(j == n2)
					break;
				for(j=0;j<n2;)
				{
					if(expo1[i]==expo2[j])
					{
						coeff3[k]=coeff1[i]+coeff2[j];
						expo3[k]=expo1[i];
						k++;
						i++;
						j++;
					}	
					else if(expo1[i] > expo2[j])
					{
						coeff3[k]=coeff1[i];
						expo3[k]=expo1[i];
						k++;
						i++;
					}
					else if(expo1[i] < expo2[j])
					{
						coeff3[k]=coeff2[j];
						expo3[k]=expo2[j];
						k++;
						j++;
					}					
				}
			}
			//copy remaining terms of 1st polynomial
			for(;i<n1;i++)
			{
				coeff3[k]=coeff1[i];
				expo3[k]=expo1[i];
				k++;
				i++;
			}
			
			//copy remaining terms of 2nd polynomial
			for(;j<n2;j++)
			{
				coeff3[k]=coeff2[j];
				expo3[k]=expo2[j];
				k++;
				j++;
			}			
			n3=k;
		}
//-----------------------------------------------------

		void display()
		{
			for(i=0;i<k;i++)
			{
				cout<<coeff3[i]<<" x^"<<expo3[i]<<"  ";
			}	
		}
//-----------------------------------------------------
};

main()
{
	array a;
	int op=-1;
	while(op!=0)
	{
		cout<<"\n1:Enter polynomial";
		cout<<"\n2:Display Addition";
		cout<<"\n3:Add";
		cout<<"\nEnter Choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				a.enter();		
			break;
			
			case 2:
				a.display();
			break;	
			
			case 3:
				a.add();
			break;
		}
	}
}
