/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 01:23:33 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
ListNode *find(ListNode *head, int n) {
	ListNode dummy(0), *ptr1 = &dummy, *ptr2 = ptr1;
	ptr1->next = head;
	while(n > 0){
		ptr1 = ptr1->next;
		n--;
	}
	while(ptr1->next){
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	return ptr2->next;
}
int main(int argc, const char* argv[])
{
	return 0;
}
