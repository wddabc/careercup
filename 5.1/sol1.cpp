/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 19:35:47 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int insert(int M, int N, int j, int i){
	M <<= i;
	int mask = (-1)&~((1 << j+1)-1);
	mask += (1 << i)-1;
	return (N&mask)|M;
}
using namespace binary;
int main(int argc, const char* argv[])
{
	string M, N;
	int j, i;
	while(1){
		cin >> M >> N >> j >> i;
		cout << dec2bi(insert(bi2dec(M), bi2dec(N), j, i)) << endl;
	}
	return 0;
}
