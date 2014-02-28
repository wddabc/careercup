/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 28-02-2014
* Last Modified : Fri Feb 28 01:01:39 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
vector<string> get_permutation(string str){
	if (!str.length()) return vector<string>(1, "");
	vector<string> prev = get_permutation(str.substr(1));
	vector<string> res;
	char a = str[0];
	for(int i = 0; i < prev.size(); ++ i){
		for(int j = 0; j <= prev[i].length(); ++ j){
			string tmp = prev[i]; 
			tmp.insert(j, 1, a);
			res.push_back(tmp);
		}
	}
	return res;
}
int main(int argc, const char* argv[])
{
	vector<string> res = get_permutation("1234");
	for(int i = 0; i < res.size(); ++ i)
		cout << res[i] << endl;
	cout << res.size() << endl;
	return 0;
}
