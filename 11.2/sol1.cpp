/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 22:22:58 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
vector<string> sort_lst(vector<string> lst){
	map<string, vector<string> > mp;
	for(int i = 0; i < lst.size(); ++ i){
		string key = lst[i];
		sort(key.begin(), key.end());
		map<string, vector<string> >::iterator itr = mp.find(key);
		if(itr == mp.end())
			mp[key] = vector<string>(1, lst[i]);
		else
			itr->second.push_back(lst[i]);
	}
	int idx = 0;
	for(map<string, vector<string> >::iterator itr = mp.begin(); itr != mp.end(); ++ itr){
		for(int i = 0; i < itr->second.size(); ++ i)
		  lst[idx++] = itr->second[i];
	}
	return lst;
}

int main(int argc, const char* argv[])
{
	return 0;
}
