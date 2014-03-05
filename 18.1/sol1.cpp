/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-03-2014
* Last Modified : Wed Mar  5 01:21:07 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int add(int n1, int n2){
	if(!n2) return n1;
	int carry = n1&n2;
	carry <<= 1;
	return add(n1^n2, carry);
}
int main(int argc, const char* argv[])
{
	cout << add(87, 100) << endl;
	return 0;
}
