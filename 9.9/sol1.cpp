/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 18:45:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int total = 0;
bool isValid(vector<vector<bool> > &board, int x, int y){
	for(int i = 0; i < y; ++ i)
	  if(board[i][x]) return false;
	for(int k = max(0, (int)y-x); k < min((int)board.size(), (int)board.size()-x+y); ++ k)
		if(board[k][k+x-y]) return false;
	for(int k = max(0, x+y-(int)board.size()); k < min((int)board.size(), x+y+1); ++ k)
		if(board[k][x+y-k]) return false;
	return true;
}
void dfs(vector<vector<bool> > &board, int n){
	if(n == board.size()){
	  for(int i = 0; i < n; ++ i){
		for(int j = 0; j < n; ++ j)
			if(board[i][j]) cout << "Q";
			else
				cout << ".";
		cout << endl;
	  }
	  cout << endl;
	  total ++;
	}
	else{
		for(int i = 0; i < board[n].size(); ++ i){
			if(isValid(board, i, n)){
				board[n][i] = true;
				dfs(board, n+1);
				board[n][i] = false;
			}
		}
	}
}
void nQueens(int n){
	vector<vector<bool> > board(n, vector<bool>(n, false));
	dfs(board, 0);
}
int main(int argc, const char* argv[])
{
	nQueens(8);
	cout << total << endl;
	return 0;
}
