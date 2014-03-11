/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 11-03-2014
* Last Modified : Tue Mar 11 02:24:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
vector<vector<pair<int, int> > > preproc(vector<vector<bool> > &mtx){
	int m = mtx.size(), n = mtx[0].size();
	vector<vector<pair<int, int> > > res(m, vector<pair<int, int> > (n, make_pair(0,0)));
	for(int i = 0; i < n; ++ i)
		res[m-1][i].first = mtx[m-1][i]?1:0;
	for(int i = 0; i < m; ++ i)
		res[i][n-1].second = mtx[i][n-1]?1:0;
	for(int i = m-2; i >= 0; -- i)
		for(int j = 0; j < n; ++ j)
			res[i][j].first = mtx[i][j]?res[i+1][j].first+1:0;
	for(int i = n-2; i >= 0; -- i)
		for(int j = 0; j < m; ++ j)
			res[j][i].second = mtx[j][i]?res[j][i+1].second+1:0;
	return res;
}

bool checkSizeByPoint(vector<vector<pair<int, int> > > &mtx, int size, int row, int col){
	if(row+size > mtx.size()||col+size > mtx[0].size()) return false;
	pair<int,int> nw = mtx[row][col], ne = mtx[row][col+size-1], sw = mtx[row+size-1][col];
	if(nw.first < size) return false;
	if(nw.second < size) return false;
	if(ne.first < size) return false;
	if(sw.second < size) return false;
	return true;
}

int maxBoundary(vector<vector<bool> > &mtx){
	vector<vector<pair<int, int> > > proc = preproc(mtx);
	for(int s = mtx.size(); s > 0; -- s)
		for(int i = 0; i < mtx.size(); ++ i)
			for(int j = 0; j < mtx[i].size(); ++ j)
				if(checkSizeByPoint(proc, s, i, j))
					return s;
	return 0;
}

int main(int argc, const char* argv[])
{
	bool v1[] = {0,1,1};
	bool v2[] = {0,1,1};
	bool v3[] = {1,0,1};
	vector<vector<bool> > v;
	v.push_back(vector<bool>(v1, v1 + sizeof(v1)/sizeof(bool)));
	v.push_back(vector<bool>(v2, v2 + sizeof(v2)/sizeof(bool)));
	v.push_back(vector<bool>(v3, v3 + sizeof(v3)/sizeof(bool)));
	cout << maxBoundary(v) << endl;
	return 0;
}
