/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sun Mar  2 01:06:07 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
pair<int, int> search(vector<vector<int> > &mtx, int target, pair<int, int> sw, pair<int, int> ne){
	int sw_x = sw.first, ne_x = ne.first, sw_y = sw.second, ne_y = ne.second;
	if(sw.first == ne.first && sw.second == ne.second)
		if(mtx[sw.second][sw.first] == target)
			return sw;
		else
			return make_pair(-1, -1);
	int sw_xi = sw.first, ne_xi = ne.first, sw_yi = sw.second, ne_yi = ne.second;
	while(sw_xi <= ne_xi && ne_yi <= sw_yi){
		int xm = (sw_x + ne_x)/2, ym = (sw_y + ne_y)/2;
		if(mtx[ym][xm] == target) return make_pair(xm, ym);
		else if(mtx[ym][xm] > target){
			sw_xi = xm + 1;
			ne_yi = ym + 1;
			continue;
		} else{
			ne_xi = xm - 1;
			sw_yi = ym - 1;
			continue;
		}
	}
	cout << sw_xi << ":" <<sw_yi << ":" << ne_xi << ":" << ne_yi << endl;
	pair<int, int> psw = search(mtx, target, sw, make_pair(ne_xi, ne_yi));
	if(psw.first != -1 && psw.second != -1)
	  return psw;
	return search(mtx, target, make_pair(sw_xi, sw_yi), ne);
}
pair<int, int> search(vector<vector<int> > &mtx, int target){
	int n = mtx.size() - 1, m = mtx[0].size() - 1;
	return search(mtx, target, make_pair(0, n), make_pair(m, 0));
}
int main(int argc, const char* argv[])
{
	int v1[] = {20, 35, 80, 95};
	int v2[] = {30, 55, 95, 105};
	int v3[] = {40, 80, 100, 120};
	vector<vector<int> > mtx;
	mtx.push_back(vector<int>(v1, v1 + sizeof(v1)/sizeof(int)));
	mtx.push_back(vector<int>(v2, v2 + sizeof(v2)/sizeof(int)));
	mtx.push_back(vector<int>(v3, v3 + sizeof(v3)/sizeof(int)));
	pair<int, int> p = search(mtx, 55);
	cout << p.first << "," << p.second << endl;
	return 0;
}
