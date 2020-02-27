/*cout obj of stdout stream while cerr obj of stderr stream . Generally,
stdout ought to be used for actual program output whereas all info and 
error message should be printed to stderr, inorder that if the user 
redirects output to a file info message are still printed on screen 
and not on output file.*/
#include<iostream>
using namespace std;
main()
{
	char str[]="UNABLE TO READ...";
	cerr<<str;
}
