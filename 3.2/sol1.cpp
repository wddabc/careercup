/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 15:37:09 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <stack>
template <class T>
class stack_min: public stack<T> {
	private:
			stack<T> min_sta;
	public:
			void push(T t){
				stack<T>::push(t);
				if(min_sta.empty()||min_sta.top() >= t)
					min_sta.push(t);
			}
			T min(){
				if(!min_sta.empty())
					return min_sta.top();
				else
					return -1;
			}
			void pop(){
				T t = stack<T>::top();
				stack<T>::pop();
				if(t == min_sta.top())
					min_sta.pop();
			}
};
int main(int argc, const char* argv[])
{
	stack_min<int> mystack;
	mystack.push(8);
	cout << mystack.min() << endl;
	mystack.push(3);
	cout << mystack.min() << endl;
	mystack.push(6);
	cout << mystack.min() << endl;
	mystack.push(5);
	cout << mystack.min() << endl;
	mystack.push(1);
	cout << mystack.min() << endl;
	mystack.push(1);
	cout << mystack.min() << endl;
	mystack.push(2);
	cout << mystack.min() << endl;
	mystack.push(10);
	cout << mystack.min() << endl;
	cout << "==============\n";
	while(!mystack.empty()){
		cout << mystack.min() << endl;
		mystack.pop();
	}
	return 0;
}
