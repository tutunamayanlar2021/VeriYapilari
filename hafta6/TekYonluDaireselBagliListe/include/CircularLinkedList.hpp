#ifndef CIRCULARLINKEDLIST_HPP
#define CIRCULARLINKEDLIST_HPP
#include <iostream>
#include "Iterator.hpp"
using namespace std;
template<typename Object>
class CircularLinkedList{
	private:
		Node<Object>*head;
		int size;
		Iterator<Object>FindPrevByPosition(int index){
			int ind=0;
			Iterator<Object>iterator(head);
			while(index !=ind++){
				iterator.next();
			}
				return iterator;
				
		}
		void UpdateLastNode(){
			Node<Object>*lastNode=FindPrevByPosition(size).current;
			lastNode->next=head->next;
			
		}
	public:
		CircularLinkedList(){
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
			if(index==0)UpdateLastNode();
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
			int index =0,i=0;
			for(Iterator<Object> iterator(head->next);i<size;iterator.next()){
				if(iterator.getCurrent()== item) return index;
				index++;
				i++;
			}
			throw "Hata";
		}
		const Object&elementAt(int index){
			//if(index<0 || index>=size) throw hata
			int ind=0;
			Iterator<Object> iterator(head->next);
			for(; ind!=index;iterator.next()){
			
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
			if(size==0)prev.current->next=NULL;
			if(index==0 &&size!=0) UpdateLastNode();
		}
		bool find(const Object&item){
			int index=0;
			for(Iterator<Object> iterator(head->next);index<size;iterator.next()){
				if(iterator.getCurrent()== item) return true;
				index++;
			}
			return false;
		}
		void PrintAllFromPosition(int index){
			//if(index<0 ||index>=size) throw hata
			Iterator<Object>iterator =FindPrevByPosition(index);
			int ind=0;
			for(iterator.next();ind<size;iterator.next(),ind++){
				cout<<iterator.getCurrent()<<" ";
			}
			cout<<endl;
		}
		friend ostream& operator<<(ostream&screen,CircularLinkedList&right){
				int index=0;
			for(Iterator<Object> iterator(right.head->next);index<right.size;iterator.next()){
				screen<<iterator.getCurrent()<<"->";
				index++;
			}
			screen<<"NULL"<<endl;
			return screen;
		}
		void clear(){
			while(!isEmpty())
				removeAt(0);
		}
		~CircularLinkedList(){
			clear();
			delete head;
		}
		
	
};


#endif