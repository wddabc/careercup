/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 03-03-2014
* Last Modified : Mon Mar  3 21:52:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void* aligned_malloc(size_t req_bytes, size_t pow){
	int mask = 1 << pow;
	int offset = mask-1 + sizeof(void*);
	void* p = (void*) malloc(req_bytes);
	if(!p) return NULL;
	void** q = (void**) (((size_t)p+offset) & ~(mask-1)); 
	q[-1] = p;
	return (void*)q;
}
void aligned_free(void *p){
	void* po = ((void**)p)[-1];
	free(po);
}
int main(int argc, const char* argv[])
{
	int *a = (int*)aligned_malloc(5*sizeof(int), 16);
	*a = 10;
	cout << *a << endl;
	aligned_free((void*)a);
	return 0;
}
