/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 17:35:35 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void swap(int &n1, int&n2){
	n1^=n2;
	n2^=n1;
	n1^=n2;
}
int main(int argc, const char* argv[])
{
	int a = 10, b = 9;
	swap(a, b);
	cout << a << ":" << b << endl;
	return 0;
}
