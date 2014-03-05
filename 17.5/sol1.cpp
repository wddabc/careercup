/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 20:16:14 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
pair<int, int> guess(string corr, string guess){
	if(corr.length() != guess.length()) return make_pair(-1, -1);
	map<char, int> mp;
	int hit = 0, phit = 0;
	for(int i = 0; i < corr.length(); ++ i){
		mp[corr[i]] ++;	
		if(guess[i] == corr[i])
			hit++;
	}
	for(int i = 0; i < guess.length(); ++ i){
		if(mp[guess[i]] > 0){
			mp[guess[i]] --;
			phit ++;
		}
	}
	return make_pair(hit, phit-hit);
}
int main(int argc, const char* argv[])
{
	pair<int, int> p = guess("RGBY", "GGRR");
	cout << p.first << ":" << p.second << endl;
	return 0;
}
