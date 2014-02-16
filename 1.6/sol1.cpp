/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 15-02-2014
* Last Modified : Sat Feb 15 22:33:00 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include “../general.h"
    void rotate(vector<vector<int> > &matrix) {
        int m = matrix.size();
        for(int i = 0; i < m/2; ++ i)
            for(int j = i; j < m-i-1; ++ j){
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[m-j-1][i];
                matrix[m-j-1][i] = matrix[m-i-1][m-j-1];
                matrix[m-i-1][m-j-1] = matrix[j][m-i-1];
                matrix[j][m-i-1] = tmp;
            }
    }
int main(int argc, const char* argv[])
{
	return 0;
}
