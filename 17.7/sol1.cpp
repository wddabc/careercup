/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-03-2014
* Last Modified : Tue Mar  4 22:10:16 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
string digits[] = {"","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string bigs[] = {"", "Thousand", "Million", "Billion"};
string hum2string(int num){
	string res = "";
	bool flag = false;
	if(num >= 100){
		res += digits[num/100] + " Hundred ";
		num %= 100;
		flag = true;
	}
	if(num&&flag) res += "and ";
	if(num > 10 && num < 20){
		res += teens[num-11] + " ";
		return res;
	}
	if(num >= 10){
		res += tens[num/10] + " ";
		num %= 10;
	}
	if(num){
		res += digits[num] + " ";
	}
	return res;
}
string num2string(int num){
	if(!num) return "Zero";
	if(num < 0) return "Negative " + num2string(-1*num);
	string res;
	int i = 0;
	while(num > 0){
		int hum = num%1000;
		if(hum)
			res = hum2string(hum) + bigs[i] + ", " + res;
		num/=1000;
		i++;
	}
	int last = res.length() - 1;
	while(last >= 0 && res[last] == ',' || res[last] == ' ') last --;
	return res.substr(0, last + 1);
}
int main(int argc, const char* argv[])
{
	cout << num2string(-100000000) << endl;
	return 0;
}
