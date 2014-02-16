/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-02-2014
* Last Modified : Sun Feb 16 18:45:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
#include <queue>
enum AnimalType {DOG, CAT};
class Animal {
	int order;
	string name;
	AnimalType type;
	public:
		Animal(string _name): name(_name){}
		AnimalType getType(){
			return type;
		}
		string getName(){
			return name;
		}
		void setType(AnimalType _type){
			type = _type;
		}
		void setOrder(int _order){
			order = _order;
		}
		bool operator< (const Animal &ani){
			return order < ani.order;
		}
};
class Dog: public Animal {
	public:
		Dog(string _name): Animal(_name){
			Animal::setType(DOG);
		}
};
class Cat: public Animal {
	public:
		Cat(string _name): Animal(_name){
			Animal::setType(CAT);
		}
};

class Shelter {
	queue<Dog> dog_que;
	queue<Cat> cat_que;
	int order;
	public:
		Shelter():order(0){}
		void enqueue(Animal ani){
			ani.setOrder(order++);
			if(ani.getType() == DOG)
				dog_que.push((Dog&) ani);
			if(ani.getType() == CAT)
				cat_que.push((Cat&) ani);
		}
		Animal dequeueAny(){
			if(dog_que.front() < cat_que.front()){
				return dequeueDog();
			}else{
				return dequeueCat();
			}
		}
		Dog dequeueDog(){
			Dog res = dog_que.front();
			dog_que.pop();
			return res;
		}
		Cat dequeueCat(){
			Cat res = cat_que.front();
			cat_que.pop();
			return res;
		}
};

int main(int argc, const char* argv[])
{
	return 0;
}
