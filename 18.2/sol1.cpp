/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 05-03-2014
* Last Modified : Wed Mar  5 01:59:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <time.h>
void rand_suffle(int *arr, int n){
	int idx = ((double)rand()/RAND_MAX)*n;
	if(n > 1)
		rand_suffle(arr+1, n-1);
	int tmp = arr[idx];
	arr[idx] = arr[0];
	arr[0] = tmp;
}
int main(int argc, const char* argv[])
{
	srand (time(NULL));
	rand();
	int a[] = {1,2,3,4,5,6,7,8,9,10}, n = sizeof(a)/sizeof(int);
	rand_suffle(a, n);
	for(int i = 0; i < n; ++ i)
	  cout << a[i] << endl;
	return 0;
}
