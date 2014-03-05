/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 22:15:01 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int max_sum(vector<int> arr){
	int res = 0, tmp = 0;
	for(int i = 0; i < arr.size(); ++ i){
		tmp += arr[i];
		if(tmp > res) res = tmp;
		tmp = max(tmp, 0);
	}
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
