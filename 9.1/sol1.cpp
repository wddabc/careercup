/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 19-02-2014
* Last Modified : Wed Feb 19 00:40:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int count(int n){
	int n1 = 1, n2 = 0, n3 = 0;
	for(int i = 0; i < n; ++ i){
		int cur = n1 + n2 + n3;
		n3 = n2;
		n2 = n1;
		n1 = cur;
		cout << n1 << endl;
	}
	return n1;
}
int main(int argc, const char* argv[])
{
	cout << count(10) << endl;
	return 0;
}
