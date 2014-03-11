/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 11-03-2014
* Last Modified : Tue Mar 11 02:36:11 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int subMax(vector<vector<int> > &mtx){
	int res = 0, m = mtx.size(), n = mtx[0].size();
	for(int i = 0; i < mtx.size(); ++ i){
		vector<int> tmp(n, 0);
		for(int j = i; j < mtx.size(); ++ j){
			for(int k = 0; k < mtx[j].size(); ++ k)
				tmp[k] += mtx[j][k];
			int sm = 0;
			for(int k = 0; k < tmp.size(); ++ k){
				sm += tmp[k];
				if(sm > res)
					res = sm;
				sm = max(0, sm);
			}
		}
	}
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
