/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 22:15:28 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
TreeNode* commonAnc(TreeNode *root, TreeNode *p, TreeNode *q, bool &find){
	if(!root) return NULL;
	bool find_left = false, find_right = false;
	TreeNode *left_res = commonAnc(root->left, p, q, find_left);
	TreeNode *right_res = commonAnc(root->right, p, q, find_right);
	if(find_left || find_right){
		find = true;
		return find_left? left_res: right_res;
	}
	if((left_res == p&&right_res == q) || (right_res == p && left_res == q)){
		find = true;
		return root;
	}
	if(root == p || root == q){
		if(left_res == p || left_res == q || right_res == p || right_res == q){
			find = true;
			return root;
		}
		else
			return root;
	}
	if(left_res == p || left_res == q)
		return left_res;
	if(right_res == p || right_res == q)
		return right_res;
	return NULL;
}
TreeNode* commonAnc(TreeNode *root, TreeNode *p, TreeNode *q){
	bool find = false;
	TreeNode* res = commonAnc(root, p, q, find); 
	if(find)
		return res;
	return NULL;
}
int main(int argc, const char* argv[])
{
	return 0;
}
