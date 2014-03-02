/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 02-03-2014
* Last Modified : Sun Mar  2 01:55:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
class RankNode {
	public:
		int val, size;
		RankNode *left, *right;
		RankNode(int _val): val(_val), size(1), left(NULL), right(NULL){}
		~RankNode(){
			delete left;
			delete right;
		}
		void insert(int _val){
			if(_val == val)
				size ++;
			else if(_val > val){
				if(!right)
					right = new RankNode(_val);
				else
					right->insert(_val);
			} else {
				if(!left)
					left = new RankNode(_val);
				else
					left->insert(_val);
				size ++ ;
			}
		}
		int getSize(int _val){
			if(_val == val)
				 return size;
			else if(_val > val){
				if(!right)
					return size;
				else
					return size + right->getSize(_val);
			} else {
				if(!left)
					return 0;
				else
					return left->getSize(_val);
			}

		}
};

class Stream {
	private:
		static RankNode *root;
	public:
		static void track(int val){
			if(!root)
				root = new RankNode(val);
			else
				root->insert(val);
		}
		static int getRankOfNumber(int x){
			if(root)
				return root->getSize(x) - 1;
			return -1;
		}
};
RankNode* Stream::root = NULL;

int main(int argc, const char* argv[])
{
	Stream::track(5);
	Stream::track(1);
	Stream::track(4);
	Stream::track(4);
	Stream::track(5);
	Stream::track(9);
	Stream::track(7);
	Stream::track(13);
	Stream::track(3);
	cout << Stream::getRankOfNumber(1) << endl;
	cout << Stream::getRankOfNumber(3) << endl;
	cout << Stream::getRankOfNumber(4) << endl;
	return 0;
}
