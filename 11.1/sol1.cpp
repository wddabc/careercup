/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 01-03-2014
* Last Modified : Sat Mar  1 22:05:08 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void merge(int A[], int m, int B[], int n) {
        for(int i = m + n - 1, ai = m-1, bi = n-1; i >= 0; -- i)
            if(ai >=0 && bi >= 0)
                if(A[ai] > B[bi])
                    A[i] = A[ai--];
                else
                    A[i] = B[bi--];
                else if(bi >= 0)
                    A[i] = B[bi--];
            else break;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
