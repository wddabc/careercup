/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 19:32:18 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
using namespace binary;
int getNext(int num){
	bool find = false;
	int cnt = 0, i = 0;
	for(; i < 31; ++ i){
		if(num&(1 << i)){
			find = true;
			cnt ++;
		}else if(find)
			break;
	}
	if(i == 31) return num;
	num &= (-1)&~((1 << i)-1);
	num |= 1 << i;
	num |= (1<<cnt-1)-1;
	return num;
}

int getPrev(int num){
	bool find = false;
	int cnt = 0, i = 0;
	for(; i < 31; ++ i){
		if(!(num&(1 << i)))
			find = true;
		else if(!find)
			cnt ++;
		else break;
	}
	if(i == 31) return num;
	num &= (-1)&~((1 << i+1)-1);
	int addon = (1 << (cnt + 1))-1;
	cout << dec2bi(addon) << endl;
	num |= addon << i-cnt-1;
	return num;
}
int main(int argc, const char* argv[])
{
	cout << "00000000000000000010011101110000" << endl;
	cout << dec2bi(getNext(bi2dec("10011101110000"))) << endl; 
	cout << dec2bi(getPrev(bi2dec("10011101110000"))) << endl; 
	return 0;
}
