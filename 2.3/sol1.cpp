/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 01:19:41 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void remove(ListNode *node){
	node->val = node->next->val;
	node->next = node->next->next;
}
int main(int argc, const char* argv[])
{
	int myints[] = {1,4,7,2,3,4,5,4,5,4,7};
	vector<int> v(myints, myints+sizeof(myints)/sizeof(int));
	ListNode *head = new ListNode(v);
	head->display();
	remove(head->next->next);
	head->display();
	return 0;
}
