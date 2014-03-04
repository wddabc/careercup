/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 03-03-2014
* Last Modified : Mon Mar  3 20:44:14 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
template<class T>
class smartPtr {
	protected:
		T* ptr;
		size_t* ref;
		void remove(){
			--(*ref);
			if(!(*ref)){
				delete ptr;
				delete ref;
				ptr = NULL;
				ref = NULL;
			}
		}
	public:
		smartPtr(T *_ptr): ptr(_ptr), ref(new size_t(1)){}
		smartPtr(const smartPtr<T> &p): ptr(p.ptr), ref(p.ref){
			(*ref) ++;
		}
		smartPtr<T>& operator=(const smartPtr<T> &p){
			if(this == &p) return *this;
			if(*ref > 0)
				remove();
			ref = p.ref;
			ptr = p.ptr;
			(*ref)++;
			return *this;
		}
		bool operator==(const smartPtr<T> &p){
			return ptr == p.ptr;
		}
		~smartPtr(){
			remove();
		}
		T operator*(){
			return *ptr;
		}
};
int main(int argc, const char* argv[])
{
	smartPtr<int> p(new int(1));
	smartPtr<int> q(new int(2));
	cout << *p << endl;
	p = q;
	cout << *p << endl;
	return 0;
}
