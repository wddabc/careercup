/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 23:11:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int find(vector<string> v, string target){
	int l = 0, r = v.size(), mid;
	while(l <= r){
		mid = (l + r)/2;
		if(v[mid] == target) return mid;
		int new_mid = mid;
		while(v[new_mid] == "" && new_mid < r) new_mid ++;
		if(v[new_mid] == target) return new_mid;
		if(v[new_mid] == "" || v[new_mid] > target){
			r = mid - 1;
			continue;
		} else if (v[new_mid] < target){
			l = mid + 1;
			continue;
		}
	}
	if(target == "")
	  for(int i = 0; i < v.size(); ++ i)
		if(v[i] == target)
		  return i;
	return -1;
}
int main(int argc, const char* argv[])
{
	string vt[] = {"at","","","","","","","ball","","","","","car","","","","","dad","","",""};
	vector<string> v(vt, vt+sizeof(vt)/sizeof(string));
	cout << find(v, "ball") << endl;
	return 0;
}
