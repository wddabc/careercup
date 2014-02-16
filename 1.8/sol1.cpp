/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 22:53:00 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
bool isSubstring(string haystack, string needle){
	return haystack.find(needle) != string::npos;
}
bool isRotation(string a, string b){
	if(a.length() != b.length())
		return false;
	string aa = a+a;
	return isSubstring(aa, b);
}
int main(int argc, const char* argv[])
{
	cout << isRotation("waterbottle", "erbottlewat") << endl;
	return 0;
}
