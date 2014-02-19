/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 19-02-2014
* Last Modified : Wed Feb 19 01:20:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int findIdx(vector<int> v){
	int l = 0, r = v.size() - 1, mid;
	while(l <= r){
		mid = (l + r)/2;
		if(v[mid] == mid)
			return mid;
		else if(v[mid] > mid)
				r = mid-1;
		else
			l = mid+1;
	}
	return -1;
}
int main(int argc, const char* argv[])
{
	int a[] = {-2, -1, 0, 1, 2, 3, 4, 7};
	vector<int> v(a, a+sizeof(a)/sizeof(int));
	cout << findIdx(v) << endl;
	return 0;
}
