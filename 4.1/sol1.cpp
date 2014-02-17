/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 20:32:15 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isBalanced(TreeNode *root, int &height){
        if(!root){
            height = 0;
            return true;
        }
        if(!isBalanced(root->left, height)) return false;
        int lefth = height;
        if(!isBalanced(root->right, height)) return false;
        int righth = height;
        if(abs(lefth-righth)>1) return false;
        height = max(lefth, righth) + 1;
        return true;
    }
    bool isBalanced(TreeNode *root) {
        int height;
        return isBalanced(root, height);
    }
int main(int argc, const char* argv[])
{
	return 0;
}
