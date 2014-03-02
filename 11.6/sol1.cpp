/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sun Mar  2 00:03:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
pair<int, int> search(vector<vector<int> > &mtx, int target){
	int n = mtx.size(), m = mtx[0].size(), x = m-1, y = 0;
	while(x > 0 && y < n){
		if(mtx[y][x] == target)
		  return make_pair(x,y);
		else if (mtx[y][x] > target) x--;
		else y++;
	}
	return make_pair(-1,-1);
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
