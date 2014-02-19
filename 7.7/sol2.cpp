/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose :
* Creation Date : 19-02-2014
* Last Modified : Wed Feb 19 00:22:15 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <queue>
int findK(int k){
	queue<int> que3, que5, que7;
	que3.push(3);
	que5.push(5);
	que7.push(7);
	int v_min;
	for(int i = 0; i < k; ++ i){
		int v3 = que3.size()?que3.front():INT_MAX;
		int v5 = que5.size()?que5.front():INT_MAX;
		int v7 = que7.size()?que7.front():INT_MAX;
		v_min = min(v3, min(v5, v7));
		if (v3 == v_min){
			que3.pop();
			que3.push(3*v3);
			que5.push(5*v3);
			que7.push(7*v3);
		} else if(v5 == v_min){
			que5.pop();
			que5.push(5*v5);
			que7.push(7*v5);
		} else {
			que7.pop();
			que7.push(7*v7);
		}
	}
	return v_min;
}
int main(int argc, const char* argv[])
{
	cout << findK(10) << endl;
	return 0;
}
