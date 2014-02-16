/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 21:37:32 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
bool unique(string str){
	bool dict[256];
	for(int i = 0; i < 256; ++ i) dict[i] = false;
	for(int i = 0; i < str.length(); ++ i)
		if(!dict[(int)str[i]])
			dict[(int)str[i]] = true;
		else
			return false;
	return true;	
}
int main(int argc, const char* argv[])
{
	cout << unique("sdf") << endl;
	return 0;
}
