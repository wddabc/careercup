/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 18:29:46 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
string checkWin(vector<vector<string> > &board, int link){
	int m = board.size(), n = board[0].size();
	for(int i = 0; i < m; ++ i){
		for(int j = 0; j < n; ++ j){
			if(board[i][j] == " ") continue;
			if(i+link <= m){
				int c;
				for(c = i + 1; c < i+link; ++ c)
					if(board[c][j] != board[c-1][j])
						break;
				if(c == i+link)
					return board[i][j];
			}
			if(j+link <= n){
				int c;
				for(c = j + 1; c < j+link; ++ c)
					if(board[i][c] != board[i][c-1])
						break;
				if(c == j+link)
					return board[i][j];
			}
			if(i+link<=m&&j+link<=n){
				int c;
				for(c = 1; c < link; ++ c)
					if(board[i+c][j+c] != board[i+c-1][j+c-1])
						break;
				if(c==link)
					return board[i][j];
			}
			if(i+link<=m&&j>=link-1){
				int c;
				for(c = 1; c < link; ++ c)
				  if(board[i+c][j-c] != board[i+c-1][j-c+1])
					return board[i][j];
			}
		}
	}
	return "none";
}
int main(int argc, const char* argv[])
{
	vector<vector<string> > board;
	string a[] = {"X", "X", "O"};
	board.push_back(vector<string>(a, a+sizeof(a)/sizeof(string)));
	string b[] = {"O", "X", "O"};
	board.push_back(vector<string>(b, b+sizeof(b)/sizeof(string)));
	string c[] = {"O", " ", "X"};
	board.push_back(vector<string>(c, c+sizeof(c)/sizeof(string)));
	cout << checkWin(board, 3) << endl;
	return 0;
}
