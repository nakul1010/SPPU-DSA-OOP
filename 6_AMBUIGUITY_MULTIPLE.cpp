//MULTIPLE BASE CLASS HAVE FUNCTION WITH SAME NAME
#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"\nBASE CLASS A";
		}
};

class B
{
	public:
		void display()
		{
			cout<<"\nBASE CLASS B";
		}
};

class C : public A, public B
{
	public:
		void display_derived()
		{
			cout<<"\nCHILD CLASS C";
		}
};

main()
{
	
	C obj;
/*IF I JUST DECLARE DISPLAY IN 3 CLASSES AND CALLED BY C OBJ BASIC C FN WILL 
DISPLAY BUT IF COMMENT OUT C THEN ERROR WILL BE GIVEN AND NOW DISPLAY_DERIVED
DONE IF I WILL TRY NOW TO DISPLAY DISPLAY FN ERROR WILL BE GIVEN AS NOT FIND 
IN C HENCE I WILL CALL IT BY CLASS NAME*/
	obj.A::display();
	obj.B::display();
	obj.display_derived();
}
