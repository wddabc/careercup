/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 17:26:58 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <stack>
template<class T>
class queue_by_stack{
	stack<T> sfront, sback;
	public:
		bool empty(){
			return !this->size();
		}

		size_t size(){
			return sfront.size()+sback.size();
		}

		T front(){
			if(this->size()){
				if(sback.empty())
					while(!sfront.empty()){
						sback.push(sfront.top());
						sfront.pop();
					}
				return sback.top();
			}
			return (T)-1;
		}
		
		void push(T t){
			sfront.push(t);
		}

		void pop(){
			T t = front();
			sback.pop();
		}
};

int main(int argc, const char* argv[])
{
	queue_by_stack<int> que;
	for(int i = 0; i < 10; ++ i)
		que.push(i);
	while(!que.empty()){
		cout << que.front() << endl;
		que.pop();
	}
	return 0;
}
