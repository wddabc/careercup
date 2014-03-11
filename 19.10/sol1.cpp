/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 10-03-2014
* Last Modified : Mon Mar 10 23:11:03 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        queue<pair<string, int>> que;
        set<string> used;
        que.push(make_pair(start, 1));
        used.insert(start);
        while(!que.empty()){
            pair<string, int> tmp_p = que.front();
            que.pop();
            string tmp_s = tmp_p.first;
            int step = tmp_p.second;
            if(tmp_s == end) return step;
            for(int i = 0; i < tmp_s.length(); ++ i){
                char o = tmp_s[i];
                for(char s = 'a'; s <= 'z'; ++ s){
                    tmp_s[i] = s;
                    if(dict.find(tmp_s) != dict.end() && used.find(tmp_s) == used.end()){
                        used.insert(tmp_s);
                        que.push(make_pair(tmp_s, step+1));
                    }
                }
                tmp_s[i] = o;
            }
        }
        return 0;
    }
};
int main(int argc, const char* argv[])
{
	return 0;
}
