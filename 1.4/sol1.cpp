/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 22:10:32 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void replace(char *str, int length){
	int num_space = 0;
	for(int i = 0; i < length; ++ i)
		if(str[i] == ' ') num_space ++;
	int true_len = length+2*num_space;
	str[true_len--] = '\0';
	for(int i = length-1; i >= 0; -- i)
		if(str[i] == ' '){
			str[true_len--] = '0'; 
			str[true_len--] = '2'; 
			str[true_len--] = '%'; 
		}else
			str[true_len--] = str[i];
}
int main(int argc, const char* argv[])
{
	char a[100] = "Mr John Smith";
	replace(a, 13);
	cout << a << endl;
	return 0;
}
