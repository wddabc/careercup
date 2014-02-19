/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 19-02-2014
* Last Modified : Wed Feb 19 00:45:20 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int uniquePaths(int m, int n) {
        vector<int> dp(m, 1);
        for(int i = 1; i < n; ++ i){
            for(int j = 1; j < m; ++ j){
                dp[j] += dp[j-1];
            }
        }
        return dp[m-1];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
