/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 01:41:05 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void partition(ListNode *&head, int x){
	if(!head) return;
	ListNode dummy(0), *ptr = &dummy, *ptr1 = head;
	dummy.next = head;
	while(ptr1->next){
		if(ptr1->next->val < x){
			ListNode *tmp = ptr1->next;
			ptr1->next = tmp->next;
			tmp->next = ptr->next;
			ptr->next = tmp;
		}
		else
			ptr1 = ptr1->next;
	}
	head = dummy.next;
}
int main(int argc, const char* argv[])
{
	int myints[] = {1,4,7,2,3,4,5,4,5,4,7};
	vector<int> v(myints, myints+sizeof(myints)/sizeof(int));
	ListNode *head = new ListNode(v);
	head->display();
	partition(head, 5);
	head->display();
	return 0;
}
