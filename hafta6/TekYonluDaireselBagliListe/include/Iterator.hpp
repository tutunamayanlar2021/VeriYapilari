#ifndef ITERATOR_HPP
#define ITERATOR_HPP
#include<iostream>
#include "Node.hpp"

template <typename Object>
class Iterator{
	public:
		Node<Object>*current;
		Iterator(){
			current=NULL;
		}
		
		Iterator(Node<Object>*node){
			current=node;
		}
		bool hasNext(){
			return current!=NULL;
		}
		void next(){
			//if(hasNext()) throw hata
			current =current->next;
			
		}
		const Object& getCurrent()const{
			//if(hasNext()) throw hata   
			return current->item;
		}
	
};

#endif
