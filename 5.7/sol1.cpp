/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 20:55:28 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"

bool fetchBit(int num, int col){
	return (num&(1<<col)) > 0;
}
int findMissing(vector<int> cand, int col){
	if(!cand.size()) return 0;
	vector<int> zeros, ones;
	for(int i = 0; i < cand.size(); ++ i){
		if(fetchBit(cand[i], col))
			ones.push_back(cand[i]);
		else
			zeros.push_back(cand[i]);
	}
	if(zeros.size() <= ones.size()){
		int v = findMissing(zeros, col+1);
		return (v << 1)|0;
	}else{
		int v = findMissing(ones,col+1);
		return (v << 1)|1;
	}
	return 0;
}

int findMissing(vector<int> cand){
	return findMissing(cand, 0);
}

int main(int argc, const char* argv[])
{
	int v[] = {0,1,2,3,4,5,6,7,8,9,10,12}; 
	vector<int> cand(v, v+sizeof(v)/sizeof(int));
	cout << findMissing(cand) << endl;
	return 0;
}
