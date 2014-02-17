/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 22:50:01 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void dfs(vector<vector<int> > &coll, vector<int> &sol, TreeNode *root, int value){
	if(!root) return;
	sol.push_back(root->val);
	int sum = 0;
	for(int i = sol.size()-1; i >= 0; -- i){
		sum += sol[i];
		if(sum == value)
			coll.push_back(vector<int>(sol.begin()+i, sol.end()));
	}
	dfs(coll, sol, root->left, value);
	dfs(coll, sol, root->right, value);
	sol.pop_back();
}
vector<vector<int> > genPath(TreeNode *root, int value){
	vector<vector<int> > res;
	vector<int> sol;
	dfs(res, sol, root, value);
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
