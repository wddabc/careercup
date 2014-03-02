/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 21:04:15 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void add_new(vector<string> &coll, vector<string> &left, vector<string> &right, string op){
	if(left.size() && right.size())
		for(int i = 0; i < left.size(); ++ i)
			for(int j = 0; j < right.size(); ++ j)
				coll.push_back("(" + left[i] + op + right[j] + ")");
}
map<string, vector<string> > dp;
vector<string> genExp(string in, bool tar){
	if(in.length() == 1){
		if((in[0]-'0') == tar)
		  return vector<string>(1,in);
		else return vector<string>();
	}
	string key = in + "_" + (tar?"1":"0");
	map<string, vector<string> >::iterator itr = dp.find(key);
	if(itr != dp.end())
		return itr->second;
	vector<string> res;
	for(int i = 0; i < in.length(); ++ i){
		if(in[i] != '0' && in[i] != '1'){
			vector<string> lt = genExp(in.substr(0, i), true);
			vector<string> lf = genExp(in.substr(0, i), false);
			vector<string> rt = genExp(in.substr(i+1, in.length()-i-1), true);
			vector<string> rf = genExp(in.substr(i+1, in.length()-i-1), false);
			if(in[i] == '&'){
				if(tar)
					add_new(res, lt, rt, "&");
				else{
					add_new(res, lt, rf, "&");
					add_new(res, lf, rt, "&");
					add_new(res, lf, rf, "&");
				}
			} else if(in[i] == '|'){
				if(tar){
					add_new(res, lt, rt, "|");
					add_new(res, lt, rf, "|");
					add_new(res, lf, rt, "|");
				} else
					add_new(res, lf, rf, "|");
			} else if(in[i] == '^'){
				if(tar){
					add_new(res, lt, rf, "^");
					add_new(res, lf, rt, "^");
				} else{
					add_new(res, lt, rt, "^");
					add_new(res, lf, rf, "^");
				}
			}
		}
	}
	dp[key] = res;
	return res;
}
vector<string> genExpWrap(string in, bool tar){
	vector<string> res= genExp(in, tar);
	for(int i = 0; i < res.size(); ++ i)
		if(res[i][0] == '(')
			res[i] = res[i].substr(1, res[i].length()-2);
	return res;
}
int main(int argc, const char* argv[])
{
	vector<string> res = genExpWrap("1^0|0|1", false);
	for(int i = 0; i < res.size(); ++ i)
	  cout << res[i] << endl;
	return 0;
}
