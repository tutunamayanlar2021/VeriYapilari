#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>
#include "Iterator.hpp"
#include "Node.hpp"
using namespace std;
template<typename Object>
class Node{
	private:
	Node<Object> *head;
	int length;
	Iterator<Object>finPrevPosition(int position){
		int index=0;
		Iterator< Object>iterator(head);
		while(iterator.hasNext()&& position!=index++){
			iterator.next(); 
			return iterator;
		}
	}
	public:
		List(){
			head =new Node<Object>();
			length=0;
		}
		int size()const{
			return size;
		}
		bool isEmpty()const{
			return size==0;
		}
		void add(const Object& item){
			insert(lenght,item);
		}
		void insert(int index,const Object& item){
		
		}
		const Object& first()const{
		
			
		}
		const Object& last()const{
			
		}
		int indexOf(const Object&item )const{
		
		}
		const Object& elementAt(int index){
			
		}
		void remove(const Object&item){
		
		}
		void removeAt(int index){
		
		}
		void clear(){
			
		}
		friend ostream& operator<<(ostream&screen,ArrayList<Object>& right){
		
			return screen;
		}
		
	
};


#endif