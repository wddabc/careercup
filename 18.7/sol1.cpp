/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 10-03-2014
* Last Modified : Mon Mar 10 20:14:29 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
bool isValid(string str, map<string, bool> &dp){
	if(!str.length()) return false;
	map<string, bool>::iterator itr = dp.find(str);
	if(itr != dp.end()) return itr->second;
	for(int i = 1; i < str.length(); ++ i){
		string sub1 = str.substr(0, i), sub2 = str.substr(i);
		if(dp[sub1] && isValid(sub2, dp)){
			dp[str] = true;
			return true;
		}
	}
	dp[str] = false;
	return false;
}
string findLong(vector<string> arr){
	int max_l = 0;
	string res;
	map<string, bool> dp;
	for(int i = 0; i < arr.size(); ++ i)
		dp[arr[i]] = true;
	for(int i = 0; i < arr.size(); ++ i)
		if(isValid(arr[i], dp) && (arr[i].length() > max_l)){
			max_l = arr[i].length();
			res = arr[i];	
		}
	return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
