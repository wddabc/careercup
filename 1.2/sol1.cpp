/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 21:44:56 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void reverse(char *str){
	char *s = str, *e = str;
	while(e&&*e) e++;
	e--;
	while(s < e){
		char tmp = *s;
		*(s++) = *e;
		*(e--) = tmp;
	}
}
int main(int argc, const char* argv[])
{
	char str[] = "abcdefg";
	reverse(str);
	cout << str << endl;
	return 0;
}
