/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 17:32:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
enum color { red, blue, green, black, yellow };
void paintFill(vector<vector<color> > &screen, int x, int y, color oc, color nc){
	if(y < 0 || y >= screen.size() || x < 0 || x >= screen[y].size() || screen[y][x] != oc)
		return;
	screen[y][x] = nc;
	paintFill(screen, x+1, y, oc, nc);
	paintFill(screen, x, y+1, oc, nc);
	paintFill(screen, x-1, y, oc, nc);
	paintFill(screen, x, y-1, oc, nc);
}
int main(int argc, const char* argv[])
{
	return 0;
}
