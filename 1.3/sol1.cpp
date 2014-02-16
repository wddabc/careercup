/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 21:53:53 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
bool check(const char* a, const char* b){
	if(strlen(a) != strlen(b)) return false;
	vector<int> dict(256, 0);
	int len = strlen(a);
	for(int i = 0; i < len; ++ i)
		dict[(int)a[i]] ++;
	for(int i = 0; i < len; ++ i)
		if(!dict[(int)b[i]]--)
			return false;
	return true;
}
int main(int argc, const char* argv[])
{
	cout << check("asdfghjkl", "lkjhgfdsa") << endl;
	return 0;
}
