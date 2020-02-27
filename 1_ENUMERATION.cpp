//enum variable is converted to int then stored by the compiler
#include<iostream>
using namespace std;
main()
{
	enum shape{circle,traingle,square
	};
	enum color{red=30,blue=40,yellow,green
	};
	enum name{nakul=10,yash=30,shounak,akhilesh
	};
	
	cout<<"\nSHAPE : "<<circle<<" : "<<traingle<<" : "<<square;
	cout<<"\nCOLOUR : "<<red<<" : "<<blue<<" : "<<yellow<<" : "<<green;
	cout<<"\nNAMES : "<<nakul<<" : "<<yash<<" : "<<shounak<<" : "<<akhilesh;
}
