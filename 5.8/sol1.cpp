/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 21:43:19 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
unsigned int drawFrom(int x){
	return (unsigned int)(-1) >> x;
}

unsigned int drawTo(int x){
	return ~((unsigned int)(-1) >> x);
}

void drawLine(unsigned char* screen, int w, int x1, int x2, int y){
	int stl = w*y, stb = stl + x1/8, enb = stl + x2/8;
	unsigned int draw1 = drawFrom(x1%8);
	unsigned int draw2 = drawTo(x2%8);
	if(stb == enb){
		unsigned int draw = draw1&draw2;
		screen[stb] = draw;
	}else{
		screen[stb] = draw1;
		screen[enb] = draw2;
		for(int i = stb+1; i < enb; ++ i)
			screen[i] = 0xFF;
	}

}
int main(int argc, const char* argv[])
{
	unsigned int a = -1;
	cout << a << endl;
	return 0;
}
