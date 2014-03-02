/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 19:56:53 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
struct box{
	int l,w,h;
	box(int _l, int _w, int _h): l(_l), w(_w), h(_h) {}
};
struct comp{
	bool operator()(const box &b1, const box &b2){
		return b1.l < b2.l;
	}
};
int build_tall(vector<box> boxes){
	sort(boxes.begin(), boxes.end(), comp());
	vector<int> dp(boxes.size(), 0);
	int res = 0;
	for(int i = 0; i < boxes.size(); ++ i){
		int cw = boxes[i].w, ch = boxes[i].h;
		int cur_max = 0;
		for(int j = i - 1; j >= 0; -- j)
			if(boxes[i].w < cw && dp[i] > cur_max)
				cur_max = dp[j];
		dp[i] = cur_max + ch;
		if(dp[i] > res) res = dp[i]; 
	}
	return res; 
}

int main(int argc, const char* argv[])
{
	return 0;
}
