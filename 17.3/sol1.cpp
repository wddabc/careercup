/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 18:52:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
int ntrail(int n){
	int base = 0, stage = 5;
	while(stage <= n){
		base += n/stage;
		stage*=5;
	}
	return base;	
}
int main(int argc, const char* argv[])
{
	return 0;
}
