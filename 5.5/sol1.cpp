/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 19:52:20 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int count(int a, int b){
	int c = a^b, res = 0;
	while(c){
		c &= c-1;
		res++;
	}
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
