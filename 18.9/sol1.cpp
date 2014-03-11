/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 10-03-2014
* Last Modified : Mon Mar 10 23:01:27 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
class data_stream{
	private:
		struct comp_max{
			bool operator()(const int &n1, const int &n2){
				return n1 > n2;
			}
		};
		struct comp_min{
			bool operator()(const int &n1, const int &n2){
				return n1 < n2;
			}
		};
		priority_queue<int, vector<int>, comp_max> max_queue;
		priority_queue<int, vector<int>, comp_min> min_queue;
	public:
		void insert(int num){
			int m1 = max_queue.top();
			if(num < m1){
				max_queue.push(num);
				if(max_queue.size() > min_queue.size() + 1){
					max_queue.pop();
					min_queue.push(m1);
				}
			} else {
				min_queue.push(num);
				if(max_queue.size() < min_queue.size()){
					int tmp = min_queue.top();
					min_queue.pop();
					max_queue.push(tmp);
				}
			}
		}
		int median(){
			if(max_queue.size() == min_queue.size())
				return (max_queue.top() + min_queue.top())/2;
			else
				return max_queue.top();
		}
};
int main(int argc, const char* argv[])
{
	return 0;
}
