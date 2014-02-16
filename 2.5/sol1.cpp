/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 01:42:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode dummy(0), *ptr = &dummy;
        int rem = 0;
        while(l1 || l2 || rem){
            int tmp_sum = rem;
            if(l1) {
                tmp_sum += l1->val;
                l1 = l1->next;
            }
            if(l2) {
                tmp_sum += l2->val;
                l2 = l2->next;
            }
            rem = tmp_sum/10;
            tmp_sum %= 10;
            ptr->next = new ListNode(tmp_sum);
            ptr = ptr->next;
        }
        return dummy.next;
    }
int main(int argc, const char* argv[])
{
	return 0;
}