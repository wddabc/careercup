/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-03-2014
* Last Modified : Wed Mar  5 01:11:38 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
set<string> dict;
pair<string, int> unconcat(string &sent, int start, int end, map<int, pair<string, int> > &mp){
	if(end >= sent.length())
		return make_pair(sent.substr(start), end-start);
	map<int, pair<string, int> >::iterator itr = mp.find(start);
	if(itr != mp.end())
		return make_pair(itr->second.first, itr->second.second);
	string word = sent.substr(start, end-start+1);
	pair<string, int> exact = unconcat(sent, end+1, end+1, mp);
	int res_score = exact.second;
	if(dict.find(word) == dict.end())
		res_score += end-start+1;
	string res_str = word + " " + exact.first; 
	pair<string, int> extend = unconcat(sent, start, end+1, mp);
	if(res_score > extend.second){
		res_score = extend.second;
		res_str = extend.first;
	}
	pair<string, int> res = make_pair(res_str, res_score);
	mp[start] = res;
	return res;
}
pair<string, int> unconcat(string sent){
	map<int, pair<string, int> > mp;
	return unconcat(sent, 0, 0, mp);
}
int main(int argc, const char* argv[])
{
	dict.insert("wdd");
	dict.insert("abc");
	dict.insert("alal");
	dict.insert("aha");
	dict.insert("kaka");
	pair<string, int> p = unconcat("wddabcsfjahaskfds");
	cout << p.first << endl;
	cout << p.second << endl;
	return 0;
}
