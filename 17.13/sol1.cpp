/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-03-2014
* Last Modified : Wed Mar  5 01:27:02 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
TreeNode* convertCircle(TreeNode* root){
	if(!root) return NULL;
	TreeNode* head = root, *tail = root;
	TreeNode* lh = convertCircle(root->left);
	TreeNode* rh = convertCircle(root->right);
	if(lh){
		TreeNode* lt = lh->left;
		lt->right = root;
		root->left = lt;
		head = lh;
	}
	if(rh){
		TreeNode* rt = rh->left;
		root->right = rh;
		rh->left = root;
		tail = rt;
	}
	tail->right = head;
	head->left = tail;
	return head;
}

TreeNode* convert(TreeNode* root){
	TreeNode *res = convertCircle(root);
	TreeNode *tail = res->left;
	tail->right = NULL;
	res->left = NULL;
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
