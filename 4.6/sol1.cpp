/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 21:26:08 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
TreeNode* next(TreeNode *node){
	TreeNode *ptr = node;
	if(ptr->right){
		ptr = ptr->right;
		while(ptr->left)
			ptr = ptr->left;
		return ptr;
	} else{
		TreeNode *pare = node->more;
		while(pare && ptr == pare->right){
			ptr = pare;
			pare = pare->more;
		}
		return pare;
	}
	return NULL;
}
int main(int argc, const char* argv[])
{
	return 0;
}
