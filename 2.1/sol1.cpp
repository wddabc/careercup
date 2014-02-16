/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 01:14:10 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void remove(ListNode *head){
	ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
	ptr1->next = head;
	while(ptr1->next){
		ptr2 = ptr1->next;
		int val = ptr2->val;
		while(ptr2->next){
			if(ptr2->next->val == val)
				ptr2->next = ptr2->next->next;
			else
				ptr2 = ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	head = dummy.next;
}
int main(int argc, const char* argv[])
{
	int myints[] = {1,4,7,2,3,4,5,4,5,4,7};
	vector<int> v(myints, myints+sizeof(myints)/sizeof(int));
	ListNode *head = new ListNode(v);
	remove(head);
	head->display();
	return 0;
}
