/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 19:56:52 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int sign(int n){
	return (unsigned)n>>31^1;
}
int getMax(int n1, int n2){
	int s1 = sign(n1), s2 = sign(n2), s = sign(n1-n2);
	int same = (s1^s2)^1;
	int ts = same*s + (same^1)*s1;
	return ts*n1+(ts^1)*n2; 
}
int main(int argc, const char* argv[])
{
	cout << getMax(INT_MIN, 20) << endl;
	return 0;
}
