/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose :
* Creation Date : 19-02-2014
* Last Modified : Wed Feb 19 01:23:10 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int findMagic(vector<int> v, int start, int end){
	if(start > end) return -1;
	int mid = (start+end)/2;
	if(v[mid] == mid) return mid;
	int left = min(mid-1, v[mid]);
	int lres = findMagic(v, start, left);
	if(lres != -1) return lres;
	int right = max(mid+1, v[mid]);
	int rres = findMagic(v, right, end);
	if(rres != -1) return rres;
	return -1;
}
int findMagic(vector<int> v){
	return findMagic(v, 0, v.size() - 1);
}
int main(int argc, const char* argv[])
{
	int a[] = {-2, -1, 2, 2, 4, 4, 4, 7};
	vector<int> v(a, a+sizeof(a)/sizeof(int));
	cout << findMagic(v) << endl;
	return 0;
}
