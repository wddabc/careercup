/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 17:05:10 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <stack>
vector<stack<int> > game(3, stack<int>());
void hanoi(int ori, int dest, int buffer, int n){
	if(!n) return;
	hanoi(ori, buffer, dest, n-1);
	int cur = game[ori].top();
	game[ori].pop();
	game[dest].push(cur);
	cout << "move " << cur << " from " << ori << " to " << dest << endl;
	hanoi(buffer, dest, ori, n-1);
}
int main(int argc, const char* argv[])
{
	for(int i = 5; i >= 1; --i)
		game[0].push(i);
	hanoi(0,2,1,5);
	return 0;
}
