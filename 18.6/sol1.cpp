/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 10-03-2014
* Last Modified : Mon Mar 10 19:18:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
int partition(vector<int> &arr, int s, int e, int pivot){
	while(s <= e){
		while(s <= e && arr[s] <= arr[pivot]) s++;
		while(s <= e && arr[e] > arr[pivot]) e--;
		if(s > e) break;
		int tmp = arr[s];
		arr[s] = arr[e];
		arr[e] = tmp;
	}
	return e;
}

int topK(vector<int> &arr, int k){
	int s = 0, e = arr.size()-1, pivot = 0;
	while(s <= e){
		pivot = s + rand()%(e-s+1);
		int par = partition(arr, s, e, pivot);
		cout << s << ":" << e << ":" << pivot << ":" << par << endl;
		if(par == k) return arr[pivot]; 
		else if(par > k)
			e = par;
		else
			s = par+1;
	}
	return 0;
}
int main(int argc, const char* argv[])
{
	srand (time(NULL));
	int a[] = {2,1,3,3,5,6,7,8,9,0};
	vector<int> v(a, a+sizeof(a)/sizeof(int));
	cout << topK(v, 5) << endl;
	return 0;
}
