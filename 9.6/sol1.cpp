/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 17:13:56 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"

void dfs(vector<string> &coll, string sol, int left, int right){
	if(!left&&!right) coll.push_back(sol);
	if (left > 0) dfs(coll, sol+"(", left-1, right);
	if (right > left) dfs(coll, sol+")", left, right-1);
	return;
}

vector<string> generateParenthesis(int n){
	string sol = "";
	vector<string> res;
	dfs(res, sol, n, n);
	return res;
}
int main(int argc, const char* argv[])
{
	vector<string> paren = generateParenthesis(4);
	for(int i = 0; i < paren.size(); ++ i)
	  cout << paren[i] << endl;
	return 0;
}
