/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 28-02-2014
* Last Modified : Fri Feb 28 00:36:56 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void dfs(vector<vector<int> > &coll, vector<int> &sol, vector<int> set_in, int start){
	coll.push_back(sol);
	for(int i = start; i < set_in.size(); ++ i){
		sol.push_back(set_in[i]);
		dfs(coll, sol, set_in, i+1);
		sol.pop_back();
	}
}
vector<vector<int> > gen_sub(vector<int> set_in){
	vector<vector<int> > res;
	vector<int> sol;
	dfs(res, sol, set_in, 0);
	return res;
}
int main(int argc, const char* argv[])
{
	int a[] = {1,2,3,4,5,6,7,8};
	vector<int> set_in(a, a+sizeof(a)/sizeof(int));
	vector<vector<int> >res = gen_sub(set_in);
	for(int i = 0; i < res.size(); ++ i){
		for (int j = 0; j < res[i].size(); ++ j)
		  cout << res[i][j] << " ";
		cout << endl;
	}
	cout << res.size() << endl;
	return 0;
}
