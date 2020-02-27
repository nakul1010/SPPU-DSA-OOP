#include<iostream>
#include<string.h>
using namespace std;

class strings
{
	private:
		char s[30];
	public:
		void get_string()
		{
			cout<<"Enter string : ";
			cin>>s;
		}
		int operator == (strings s2)
		{
			if(strcmp(s,s2.s)==0)
				return 1;
			else
				return 0;
		}
};

main()
{
	int op;
	strings s1,s2;
	s1.get_string();
	s2.get_string();
	
	if(s1==s2)
		cout<<endl<<"strings equal";
	else
		cout<<endl<<"strings not equal"	;	
}
