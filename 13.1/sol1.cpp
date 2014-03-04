/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 03-03-2014
* Last Modified : Mon Mar  3 18:45:40 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
vector<string> read_lastK(string fn, int k){
	int ptr = 0, cur_size = 0;
	vector<string> res(k, "");
	ifstream f_in(fn.c_str());
	while(1){
		ptr %= k;
		string cur;
		getline(f_in, cur);
		if(!f_in.eof())
			res[ptr] = cur;
		else
			break;
		ptr ++;
		cur_size ++;
	}
	f_in.close();
	if(cur_size < k)
		return vector<string>(res.begin(), res.begin() + cur_size);
	else{
		vector<string> ret;
		for(int i = 0; i < k; ++ i){
			ret.push_back(res[(ptr+i)%k]);
		}
		return ret;
	}

}
int main(int argc, const char* argv[])
{
	vector<string> res = read_lastK(argv[1], 10);
	for(int i = 0; i < res.size(); ++ i)
		cout << res[i] << endl;
	return 0;
}
