#include<iostream>
#include<string.h>
using namespace std;
int main()
{	
	char str[]="This Is A Sample String";
	char *p;
	p=str;
	for(int i=0;i<strlen(str);i++)
	{
		cout<<*p;
		p++;
	}	
	return 0;
}
