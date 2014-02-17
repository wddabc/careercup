/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 19:58:33 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
template<class T>
class tri_stack {
	T* buffer;
	int *top_lst, size, sta_num;
	int bound(int sta_idx){
		return size*(sta_idx+1);
	}
	int actual(int sta_idx){
		return size*sta_idx+top_lst[sta_idx];
	}

	public:
		tri_stack(int _size, int _sta_num): size(_size), sta_num(_sta_num){
			buffer = new T[sta_num*size];
			top_lst = new int[sta_num];
			for(int i = 0; i < sta_num; ++ i)
				top_lst[i] = -1;
		}
		
		~tri_stack(){
			delete[] buffer;
			delete[] top_lst;
		}

		void push(T t, int sta_idx){
			if(top_lst[sta_idx] < size-1)
				buffer[actual(++top_lst[sta_idx])] == t;
		}
	
		void pop(int sta_idx){
			if(top_lst[sta_idx] > -1)
				top_lst[sta_idx]--;
		}

		T top(int sta_idx){
			if(top_lst[sta_idx] > -1)
				return buffer[actual(top_lst[sta_idx])];
			return (T)-1;
		}
		
		size_t size_byidx(int sta_idx){
			return top_lst[sta_idx]+1;
		}

};
int main(int argc, const char* argv[])
{
	return 0;
}
