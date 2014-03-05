/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 20:58:47 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
pair<int, int> findIdx(vector<int> arr){
	if(!arr.size()) return make_pair(-1, -1);
	int s, e;
	for(s = 1; s < arr.size(); ++ s)
		if(arr[s] < arr[s-1])
			break;
	if(s == arr.size())
		return make_pair(0,0); 
	for(e = arr.size()-2; e >= 0; -- e)
		if(arr[e] > arr[e+1])
			break;
	cout << s << ":" << e << endl;
	int mx = INT_MIN, mn = INT_MAX;
	for(int i = s; i <= e; ++ i){
		if(arr[i] > mx) mx = arr[i];
		if(arr[i] < mn) mn = arr[i];
	}
	for(s=s-1; s >= 0; -- s)
		if(arr[s] <= mn) break;
	for(e=e+1; e < arr.size(); ++ e)
		if(arr[e] >= mx) break;
	return make_pair(s+1, e-1);

}
int main(int argc, const char* argv[])
{
	int a[] = {1,2,4,7,10,7,12,6,7,16,18,19};
	pair<int, int> p = findIdx(vector<int>(a, a + sizeof(a)/sizeof(int)));
	cout << p.first << ":" << p.second << endl;
	return 0;
}
