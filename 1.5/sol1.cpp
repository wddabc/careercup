/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 22:20:28 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
string compress(string str){
	stringstream ss;
	if(!str.length()) return str;
	char prev = str[0];
	int cnt = 1;
	for (int i = 1; i < str.length(); ++ i){
		if(str[i] != prev){
			ss << prev << cnt;
			prev = str[i];
			cnt = 1;
		}else
		  cnt ++;
	}
	ss << prev << cnt;
	return str.length() < ss.str().length()? str: ss.str();
}
int main(int argc, const char* argv[])
{
	cout << compress("aabcccccaaa") << endl;
	return 0;
}
