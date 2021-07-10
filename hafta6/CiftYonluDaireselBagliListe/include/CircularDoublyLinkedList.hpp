#ifndef CIRCULARDOUBLYLINKEDLIST_HPP
#define CIRCULARDOUBLYLINKEDLIST_HPP
#include <iostream>
#include "Node.hpp"
using namespace std;
template<typename Object>
class CircularDoublyLinkedList{
	private:
		Node<Object>*head;
		int size;
		Node<Object>*FindPreviousNode(int index){
			Node<Object>*prev=head;
			int i=1;
			for(Node<Object>*itr=head;i!=index; itr=itr->next,i++){
				prev=prev->next;
			}
			return prev;
		}
		
	public:
		CircularDoublyLinkedList(){
			head = NULL;
			size=0;
		}
		int Count()const{
			return size;
		}
		bool isEmpty()const{
			return size ==0;
		}
		void add(const Object&item){
			insert(size,item);
		}
		void insert(int index,const Object&item){
			//if(index<0 || index>size)
				if(index==0){
					if(size==0){
						head =new Node<Object>(item);
						head->next = head->prev = head;
					}else{
						head = new Node<Object>(item,head,head->prev);//çünkü ilik eleman headi gösteriyor
						head->next->prev=head;
						//yeniDüğ //A  //NULL //yeniDüğ
						head->prev->next=head;
					
					
					}
					
				}
				else{
					Node<Object>*prv= FindPreviousNode(index);
					prv->next = new Node<Object>(item,prv->next,prv);
					prv->next->next->prev=prv->next;
				}
				size++;
		}
		const Object& first(){
			return head->data;
		}
		const Object&last(){
			return head->prev->data;
		}
		int indexOf(const Object&item)const{
			int index=0;
			for(Node <Object>*itr=head;index<size;itr=itr->next){
				if(itr->data==item) {
				return index;
				index++;}
			}
			throw "Eleman Yok";
		}
		
		const Object&elementAt(int index)const{
			if(index==0)return head->data;
			return FindPreviousNode(index)->next->data;
			//if(index<0 || index>=size)
			/*Node <Object>*itr=head;
			int i =0;
			for(;itr !=NULL && i<index; itr=itr->next){
				i++;
			}
			return itr->data;*/
		}
		void remove(const Object&item){
			int index= indexOf(item);
			removeAt(index);
		}
		void removeAt(int index){
			//if(index<0 || index>=size)
			Node<Object>*del;
			if(index==0){
				del=head;
				if(size==1){
					head = head->next = head->prev = NULL;
				}
				else{
					head=head->next;
					head->prev=del->prev;
					del->prev->next=head;
				}
				
				
			}else{
				Node<Object>*prv= FindPreviousNode(index);
				del=prv->next;
				prv->next=del->next;
				del->next->prev=prv;	
				
			}
			delete del;
			size--;
		}
		bool find(const Object&item)const{
			int index=0;
			for(Node <Object>*itr=head;index<size;itr=itr->next,index++){
				if(itr->data == item)
					return true;
			}
			return false;
		}
		void clear(){
			while(!isEmpty()){
				removeAt(0);
			}
		}
		void printAllNodesPositionReverseOrder(int index){
			//if(index<0 || index>=size)
			int ind=0;
			for(Node<Object>*itr=FindPreviousNode(index+1); ind<size;itr = itr->prev){
				cout<<itr->data<<" ";
				ind++;
			}
			cout<<endl;
		}
		void printAllReverseOrder(){
			 printAllNodesPositionReverseOrder(size-1);
		}
		friend ostream&operator<<(ostream&screen,CircularDoublyLinkedList&right){
			int index=0;
			for(Node <Object>*itr=right.head; index<right.size;itr=itr->next){
				screen<<itr->data<<" ";	
				index++;
			}
			screen<<endl;
			return screen;
		}
		~CircularDoublyLinkedList(){
			clear();
		}
		
	
};


#endif