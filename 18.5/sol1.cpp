/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Wed Mar  5 12:47:06 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int min_dist(vector<string> arr, string w1, string w2){
	int res = INT_MAX, idx1 = 0, idx2 = 0;
	while(1){
		for(; idx1 < arr.size()&& arr[idx1] != w1; ++ idx1);
		for(; idx2 < arr.size()&& arr[idx2] != w2; ++ idx2);
		if(idx1 == arr.size() || idx2 == arr.size()) break;
		int cur_dist = abs(idx1-idx2);
		if(res > cur_dist) res = cur_dist;
		if(idx1 > idx2) idx2 ++;
		else
			idx1 ++;
	}
	return res;
}
int main(int argc, const char* argv[])
{
	string a[] = {"a", "b", "c", "d", "e", "b"};
	cout << min_dist(vector<string>(a, a+sizeof(a)/sizeof(string)), "d", "b") << endl;
	return 0;
}
