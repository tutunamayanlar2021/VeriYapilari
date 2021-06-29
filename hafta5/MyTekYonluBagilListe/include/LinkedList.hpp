#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <iostream>
#include "Iterator.hpp"
using namespace std;

class LinkedList{
	private:
		Node *head;
		int size;
		Iterator FindPrevByPosition(int index){
		int ind=0;
		Iterator iterator(head);
		while(iterator.hasNext()&& index !=ind++){
			iterator.next();
		}
			return iterator;
			
		}
	public:
		LinkedList(){
			head = new Node();
			size=0;
		}
		
		bool isEmpty()const{
			return size==0;
			//return head->next=NULL;
		}
		int Count()const{
			return size;
		}
		void add(const string item){
				insert(size,item);
		}
		void insert(int index,const string item){
			//if(index<0 ||index>size) throw hata
			Iterator iterator =FindPrevByPosition(index);
			iterator.current->next= new Node(item,iterator.current->next);
			size++;
		}
		const string first()const{
			//if(isEmpty()) throw hata
			return head->next->item;
		}
		const string last(){
			//if(isEmpty()) throw hata
			return FindPrevByPosition(size).getCurrent();
		}
		int indexOf(const string item)const{
			int index =0;
			for(Iterator iterator(head->next);iterator.hasNext();iterator.next()){
				if(iterator.getCurrent()== item) return index;
				index++;
			}
			throw "Hata";
		}
		const string elementAt(int index){
			//if(index<0 || index>=size) throw hata
			int ind=0;
			Iterator iterator(head->next);
			for(;iterator.hasNext()&& ind!=index;iterator.next()){
			
				ind++;
			}
			
		}
		void remove(const string item){
			int index=indexOf(item);
			removeAt(index);
		}
		void removeAt(int index){
			Iterator prev =FindPrevByPosition(index);
			Node *del=prev.current->next;
			prev.current->next=prev.current->next->next;
			delete del;
			size--;
		}
		bool find(const string item){
			for(Iterator iterator(head->next);iterator.hasNext();iterator.next()){
				if(iterator.getCurrent()== item) return true;
				
			}
			return false;
		}
		friend ostream& operator<<(ostream&screen,LinkedList&right){
			for(Iterator iterator(right.head->next);iterator.hasNext();iterator.next()){
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