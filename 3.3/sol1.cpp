/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 16:23:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <stack> 
template <class T>
class seted_stack {
	vector<stack<T> > stack_list; 
	int limit;
	public:
		seted_stack(int _limit):limit(_limit){}
		void push(T t){
			if(stack_list.empty()||stack_list.back().size() == limit)
				stack_list.push_back(stack<T>());
			stack_list.back().push(t);
		}
		void pop(){
			if(!stack_list.empty()){
				stack_list.back().pop();
				if(stack_list.back().empty())
					stack_list.pop_back();
			}
		}
		T top(){
			if(!stack_list.empty())
				return stack_list.back().top();
			else
				return (T)-1;
		}
		void popAt(int index){
			if(index >= stack_list.size())
				return;
			stack_list[index].pop();
			for(int i = index+1; i < stack_list.size(); ++ i){
				stack_list[i-1].push(shift(stack_list[i]));
			}
			if(stack_list.back().empty())
				stack_list.pop_back();
		}
		bool empty(){
			return !stack_list.size();
		}
	private:
			T shift(stack<T> &sta){
				stack<T> helper;
				while(!sta.empty()){
					helper.push(sta.top());
					sta.pop();
				}
				T res = helper.top();
				helper.pop();
				while(!helper.empty()){
					sta.push(helper.top());
					helper.pop();
				}
				return res; 
			}

};
int main(int argc, const char* argv[])
{
	seted_stack<int> mystack(1);
	mystack.push(8);
	mystack.push(3);
	mystack.push(6);
	mystack.push(5);
	mystack.push(1);
	mystack.push(1);
	mystack.push(2);
	mystack.push(10);
	cout << "==============\n";
	mystack.popAt(0);
	while(!mystack.empty()){
		cout << mystack.top() << endl;
		mystack.pop();
	}
	return 0;
}
