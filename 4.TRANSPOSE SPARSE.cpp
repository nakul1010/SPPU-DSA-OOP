#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,element,t=1,n,m,q;//imp
	int sparse[10][10],transpose[10][10];
	cout<<"Enter no. of rows and columns : ";
	cin>>r>>c;
	cout<<"\nEnter The Matrix\n";
	//Entering the Elements in Sparse Matrix 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter ("<<i<<")("<<j<<") element : ";
			cin>>element;
			if(element!=0)
			{
				sparse[t][0]=i;
				sparse[t][1]=j;
				sparse[t][2]=element;
				t=t+1;
			}
		}
	}
	sparse[0][0]=r;
	sparse[0][1]=c;
	sparse[0][2]=t-1;//Remember t-1

	//displaying sparse
	cout<<"\n\nSparse Matrix is \nRow\tColumn\tElement\n";
	for(i=0;i<t;i++)
	{
		cout<<sparse[i][0]<<"\t"<<sparse[i][1]<<"\t"<<sparse[i][2]<<"\n";
	}
	//Creating Transpose 
	transpose[0][0]=r;
	transpose[0][1]=c;
	transpose[0][2]=t-1;
	for(i=1;i<t;i++)//Rememeber i=1
	{
	transpose[i][0]=sparse[i][1];
	transpose[i][1]=sparse[i][0];
	transpose[i][2]=sparse[i][2];		
	}
	//Displaying Transpose 
	cout<<"\n\nTranspose Matrix is \nRow\tColumn\tElement\n";
	for(i=0;i<t;i++)
	{
		cout<<transpose[i][0]<<"\t"<<transpose[i][1]<<"\t"<<transpose[i][2]<<"\n";
	}	
return 0;
}
