/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 03-03-2014
* Last Modified : Mon Mar  3 20:11:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
template<class T>
class Node{
	private:
		static map<Node<T>*, Node<T>*> mp; 
	public:
		T val;
		vector<Node<T>*> neighbor;
		Node(T _val): val(_val){}
		Node(const Node<T> *node){
			val = node->val;
			mp[node] = this;
			for(int i = 0; i < node->neighbor.size(); ++ i){
				typename map<Node<T>*, Node<T>*>::iterator itr = mp.find(node->neighbour[i]);
				if(itr == mp.end())
					neighbor.push_back(&Node(node->neighbour[i]));
				else
					neighbor.push_back(itr->second);
			}
		}
};

int main(int argc, const char* argv[])
{
	return 0;
}
