/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 21:26:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
bool unique(string str){
	for(int i = 0; i < str.length(); ++ i)
		for(int j = i + 1; j < str.length(); ++ j)
			if(str[j] == str[i])
				return false;
	return true;	
}
int main(int argc, const char* argv[])
{
	cout << unique("sdf") << endl;
	return 0;
}
