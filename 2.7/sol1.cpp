/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 02:09:07 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include<stack>
bool isPalindrome(ListNode *head){
	ListNode dummy(0), *fast = head, *slow = head;
	dummy.next = head;
	stack<int> sta;
	while(fast&&fast->next){
		sta.push(slow->val);
		slow = slow->next;
		fast = fast->next->next;
	}
	if(fast) 
		slow = slow->next;
	while(slow){
		if(slow->val != sta.top())
			return false;
		sta.pop();
		slow = slow->next;
	}
	return true;
}
int main(int argc, const char* argv[])
{
	int myints[] = {1};
//	int myints[] = {1,5,6,5,1};
//	int myints[] = {1,5,6,5,1};
//	int myints[] = {1,5,6,5,1};
	vector<int> v(myints, myints+sizeof(myints)/sizeof(int));
	ListNode *head = new ListNode(v);
	head->display();
	cout << isPalindrome(head) << endl;
	return 0;
}
