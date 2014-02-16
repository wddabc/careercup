/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 14:45:48 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2, int &carry) {
		if(!l1&&!l2){
			carry = 0;
			return NULL;
		}
		int c;
		ListNode *prev = addTwoNumbers(l1->next, l2->next, c);
		int val = c + l1->val + l2->val;
		carry = val/10;
		val%=10;
		ListNode *res = new ListNode(val);
		res->next = prev;
		return res;
	}
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		int len1 = 0, len2 = 0;
		ListNode *p1 = l1, *p2 = l2;
		while(p1){
			len1++;
			p1 = p1->next;
		}
		while(p2){
			len2++;
			p2 = p2->next;
		}
		if(len1 < len2)
			return addTwoNumbers(l2, l1);
		ListNode *newl2 = new ListNode(0), *p = newl2;
		for(int i = 0; i < len1-len2; ++ i){
			p->next = new ListNode(0);
			p = p->next;
		}
		p->next = l2;
		int carry = 0;
		ListNode *res = addTwoNumbers(l1, newl2->next, carry);
		if(carry){
			ListNode *carryNode = new ListNode(carry);
			carryNode->next = res;
			return carryNode;
		}else
			return res;
		return NULL;
    }
int main(int argc, const char* argv[])
{
	int myints1[] = {5, 0, 0};
	vector<int> v1(myints1, myints1+sizeof(myints1)/sizeof(int));
	ListNode *l1 = new ListNode(v1);
	int myints2[] = {5, 0, 0};
	vector<int> v2(myints2, myints2+sizeof(myints2)/sizeof(int));
	ListNode *l2 = new ListNode(v2);
	ListNode *res = addTwoNumbers(l1, l2);
	l1->display();
	l2->display();
	res->display();
	delete l1;
	delete l2;
	delete res;
	return 0;
}
