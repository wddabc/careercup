/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 18-02-2014
* Last Modified : Tue Feb 18 18:17:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
string dou2bin(double d){
	if(d == 0.0) return "0.0";
	string res = "0.";
	for(int i = 0; i < 30; ++ i){
		d /= 0.5;
		if(d >= 1){
			res += "1";
			d -= 1;
		}
		else
		  res += "0";
		if(d == 0.0)
		  return res;
	}
	return "NULL"; 
}
int main(int argc, const char* argv[])
{
	double a;
	while(1){
		cin >> a;
		cout << dou2bin(a) << endl;
	}
	return 0;
}
