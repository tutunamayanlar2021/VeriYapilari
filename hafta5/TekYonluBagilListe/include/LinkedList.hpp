#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <iostream>
#include "Iterator.hpp"
using namespace std;
template<typename Object>
class LinkedList{
	private:
		Node<Object>*head;
		int size;
		Iterator<Object>FindPrevByPosition(int index){
		int ind=0;
		Iterator<Object>iterator(head);
		while(iterator.hasNext()&& index !=ind++){
			iterator.next();
		}
			return iterator;
			
		}
	public:
		LinkedList(){
			head = new Node<Object>();
			size=0;
		}
		
		bool isEmpty()const{
			return size==0;
			//return head->next=NULL;
		}
		int Count()const{
			return size;
		}
		void add(const Object&item){
				insert(size,item);
		}
		void insert(int index,const Object&item){
			//if(index<0 ||index>size) throw hata
			Iterator<Object>iterator =FindPrevByPosition(index);
			iterator.current->next= new Node<Object>(item,iterator.current->next);
			size++;
		}
		const Object& first()const{
			//if(isEmpty()) throw hata
			return head->next->item;
		}
		const Object& last(){
			//if(isEmpty()) throw hata
			return FindPrevByPosition(size).getCurrent();
		}
		int indexOf(const Object&item)const{
			int index =0;
			for(Iterator<Object> iterator(head->next);iterator.hasNext();iterator.next()){
				if(iterator.getCurrent()== item) return index;
				index++;
			}
			throw "Hata";
		}
		const Object&elementAt(int index){
			//if(index<0 || index>=size) throw hata
			int ind=0;
			Iterator<Object> iterator(head->next);
			for(;iterator.hasNext()&& ind!=index;iterator.next()){
			
				ind++;
			}
			
		}
		void remove(const Object& item){
			int index=indexOf(item);
			removeAt(index);
		}
		void removeAt(int index){
			Iterator<Object>prev =FindPrevByPosition(index);
			Node<Object>*del=prev.current->next;
			prev.current->next=prev.current->next->next;
			delete del;
			size--;
		}
		bool find(const Object&item){
			for(Iterator<Object> iterator(head->next);iterator.hasNext();iterator.next()){
				if(iterator.getCurrent()== item) return true;
				
			}
			return false;
		}
		friend ostream& operator<<(ostream&screen,LinkedList&right){
			for(Iterator<Object> iterator(right.head->next);iterator.hasNext();iterator.next()){
				screen<<iterator.getCurrent()<<"->";
			}
			screen<<"NULL"<<endl;
			return screen;
		}
		void clear(){
			while(!isEmpty())
				removeAt(0);
		}
		~LinkedList(){
			clear();
			delete head;
		}
		
	
};


#endif