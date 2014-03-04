/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 03-03-2014
* Last Modified : Mon Mar  3 21:51:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int** TDAlloc(int rows, int cols){
	int **p = (int**)malloc(rows*sizeof(int*) + rows*cols*sizeof(int));
	if(!p) return NULL;
	int *q = (int*)p + rows;
	for(int i = 0; i < rows; ++ i)
		p[i] = q + i*cols; 
	return p;
}
int main(int argc, const char* argv[])
{
	int **a = TDAlloc(4,5);
	a[3][4] = 1;
	cout << a[3][4] << endl;
	return 0;
}
