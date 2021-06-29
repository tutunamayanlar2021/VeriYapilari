#ifndef ITERATOR_HPP
#define ITERATOR_HPP
#include<iostream>
#include "Node.hpp"


class Iterator{
	public:
		Node *current;
		Iterator(){
			current=NULL;
		}
		
		Iterator(Node*node){
			current=node;
		}
		bool hasNext(){
			return current!=NULL;
		}
		void next(){
			//if(hasNext()) throw hata
			current =current->next;
			
		}
		const string getCurrent()const{
			//if(hasNext()) throw hata   
			return current->item;
		}
	
};

#endif
