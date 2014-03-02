/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sun Mar  2 01:18:13 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
struct comp{
	bool operator()(const pair<int, int> &p1, const pair<int, int> &p2){
		return p1.first < p2.first;
	}
};
int build_tower(vector<pair<int, int> > people){
	sort(people.begin(), people.end(), comp());
	vector<int> dp(people.size(), 0);
	int res = 0;
	for(int i = 0; i < people.size(); ++ i){
		dp[i] = 0;
		for(int j = i - 1; j >= dp[i]; ++ j)
			if(dp[j] > dp[i])
			  dp[i] = dp[j];
		dp[i] += 1;
		if(dp[i] > res) res = dp[i];
	}
	return res; 
}

int main(int argc, const char* argv[])
{
	return 0;
}
