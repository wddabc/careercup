/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 10-03-2014
* Last Modified : Mon Mar 10 22:00:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
class suffix_tree_node{
	private:
		char val;
		vector<int> index;
		map<char, suffix_tree_node*> child;
	public:
		suffix_tree_node(char _val): val(_val){
		cout<< "asdfjasdj" << endl;}
		void insert(int i, string suffix){
			index.push_back(i);
			if(!suffix.length()) return;
			char tmp = suffix[0];
			map<char, suffix_tree_node*>::iterator itr = child.find(tmp);
			if(itr != child.end())
				itr->second->insert(i, suffix.substr(1));
			else{
				suffix_tree_node* c = new suffix_tree_node(tmp);
				child[tmp] = c;
				c->insert(i, suffix.substr(1));
			}
		}
		vector<int> search(string str){
			if(!str.length()) return index;
			char tmp = str[0];
			map<char, suffix_tree_node*>::iterator itr = child.find(tmp);
			if(itr != child.end())
				return itr->second->search(str.substr(1));
			return vector<int>();
		}
		~suffix_tree_node(){
			for(map<char, suffix_tree_node*>::iterator itr = child.begin();
						itr != child.end(); ++ itr){
				delete itr->second;
				itr->second = NULL;
			}
		}
};
class suffix_tree {
	private:
		suffix_tree_node *root;
	public:
		suffix_tree(string str){
			root = new suffix_tree_node(' ');
			for(int i = 0; i < str.length(); ++ i){
				string suffix = str.substr(i);
				root->insert(i, suffix);
			}
		}
		vector<int> search(string str){
			if(!root)
				root = new suffix_tree_node(' ');
			return root->search(str);
		}
		~suffix_tree(){
			delete root;
		}
};
int main(int argc, const char* argv[])
{
	suffix_tree tree("bsibs");
	vector<int> v = tree.search("bs");
	for(int i = 0; i< v.size(); ++ i)
		cout << v[i] << endl;
	return 0;
}
