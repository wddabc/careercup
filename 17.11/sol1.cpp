/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 22:33:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <time.h>
int rand5(){
	return rand()*5;
}
int rand7(){
	while(1){
		int res = 5*rand5()+rand5();
		if(res < 21)
			return res%7;
	}
	return 0;
}
int main(int argc, const char* argv[])
{
	srand (time(NULL));
	return 0;
}
