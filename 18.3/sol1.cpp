/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-03-2014
* Last Modified : Wed Mar  5 10:54:10 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <time.h>
vector<int> rand_set(vector<int> arr, int m){
	for(int i = m; i < arr.size(); ++ i){
		int idx = (i+1)*((double)rand()/RAND_MAX);
		if(idx < m){
			int tmp = arr[idx];
			arr[idx] = arr[i];
			arr[i] = tmp;
		}
	}
	return vector<int>(arr.begin(), arr.begin()+m);
}
int main(int argc, const char* argv[])
{
	srand(time(NULL));
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	vector<int> r = rand_set(vector<int>(a, a+sizeof(a)/sizeof(int)), 3);
	for(int i = 0; i < r.size(); ++ i)
		cout << r[i] << endl;
	return 0;
}
