/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 22:05:23 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int swap(int num){
	return ((unsigned int)num&0xAAAAAAAA) >> 1| ((unsigned int)num&0x55555555) << 1;
}
int main(int argc, const char* argv[])
{
	return 0;
}
