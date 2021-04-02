#include "LinkedList.h"

template <class T>
class Stack:public LinkedList<T>{
	public:
		virtual bool Delete(T& element){
			if(this->first == 0){
				return false;
			}
			else {
				Node<T> *cr = this->first;
				this->first = cr->link;
				element = cr->data;
				delete cr;
				this->current_size--;
				return true;
			}
			
		}
};
