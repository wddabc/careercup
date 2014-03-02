/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 17:45:16 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int count(vector<int> &avail, int start, int total){
	if(!total) return 1;
	if(total < 0) return 0;
	int res = 0;
	for(int i = start; i < avail.size(); ++ i)
		res += count(avail, i, total-avail[i]);
	return res;
}

int main(int argc, const char* argv[])
{
	int av[] = {1, 5, 10, 25};
	vector<int> avail(av, av + sizeof(av)/sizeof(int));
	cout << count(avail, 0, 5) << endl;
	return 0;
}
