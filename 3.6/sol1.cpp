/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 17:36:38 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <stack>
void sort_stack(stack<int> &sta){
	stack<int> helper;
	while(!sta.empty()){
		int cur = sta.top();
		sta.pop();
		while(!helper.empty() && helper.top() > cur){
			sta.push(helper.top());
			helper.pop();
		}
		helper.push(cur);
	}
	sta = helper;
}
int main(int argc, const char* argv[])
{
	stack<int> sta;
	sta.push(2);
	sta.push(1);
	sta.push(5);
	sta.push(6);
	sta.push(5);
	sta.push(3);
	sta.push(7);
	sta.push(2);
	sta.push(4);
	sort_stack(sta);
	while(!sta.empty()){
		cout << sta.top() << endl;
		sta.pop();
	}
	return 0;
}
