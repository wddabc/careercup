/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-03-2014
* Last Modified : Wed Mar  5 11:26:08 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int count2(int n, int d){
	int cur_ptr = (int)pow(10.0, (double)d), h_ptr = cur_ptr*10;
	int base = n-n%h_ptr, low = n%cur_ptr, high = base + h_ptr, digit = (n/cur_ptr)%10;
	if(digit < 2)
		return base/10;
	else if(digit == 2)
		return base/10 + low + 1;
	else
		return high/10; 
	
}
int count2(int n){
	int res = 0;
	for(int d = 0; (int)pow(10.0, (double)d) <= n; ++ d)
		res += count2(n, d);
	return res;
}
int main(int argc, const char* argv[])
{
	cout << count2(22) << endl;
	return 0;
}
