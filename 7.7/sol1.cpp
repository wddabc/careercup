/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Wed Feb 19 00:03:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int findK(int k){
	set<int> coll;
	coll.insert(1);
	for(int i = 0; i < k; ++ i){
		int cur = *(coll.begin());
		coll.erase(coll.begin());
		coll.insert(cur*3);
		coll.insert(cur*5);
		coll.insert(cur*7);
	}
	return *(coll.begin());
}
int main(int argc, const char* argv[])
{
	cout << findK(1) << endl;
	return 0;
}
