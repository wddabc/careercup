/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 20:58:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void get_level(vector<vector<TreeNode*> > &coll, TreeNode *root, int level){
	if(!root) return;
	if(level == coll.size())
		coll.push_back(vector<TreeNode*>());
	coll[level].push_back(root);
	get_level(coll, root->left, level+1);
	get_level(coll, root->right, level+1);
}
vector<vector<TreeNode*> > get_level(TreeNode *root){
	vector<vector<TreeNode*> > res;
	get_level(res, root, 0);
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
