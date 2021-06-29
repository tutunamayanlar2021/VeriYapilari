#ifndef NODE_HPP
#define NODE_HPP
#include "Node.hpp"
#include <iostream>
using namespace std;
template<typename Object>
class Iterator{
	public:
		Node <Object>*current;
		Iterator(){
			current=NULL;
			
		}
		Iterator(Node<Object>*node){
			current = node ;
			
		}
		bool hasNext(){
			return current !=NULL;
		}
		void next(){
			//if(!hasNext()) throw hata
			curent =curent->next;
		}
		const Object& getCurrent(c)const(){
			//if(!hasNext()) throw hata
			return current->item;
			
		}
		
		
	
};


#endif