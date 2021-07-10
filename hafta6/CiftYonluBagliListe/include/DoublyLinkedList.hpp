#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP
#include <iostream>
#include "Node.hpp"
using namespace std;
template<typename Object>
class DoubleLinkedList{
	private:
		Node<Object>*head;
		int size;
		Node<Object>*FindPreviousNode(int index){
			Node<Object>*prev=head;
			int i=1;
			for(Node<Object>*itr=head; itr->next!=NULL && i!=index; itr=itr->next,i++){
				prev=prev->next;
			}
			return prev;
		}
		
	public:
		DoubleLinkedList(){
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
					head = new Node<Object>(item,head);//çünkü ilik eleman headi gösteriyor
					if(head->next !=NULL){
						head->next->prev=head;
					//yeniDüğ //A  //NULL //yeniDüğ
					}
				}
				else{
					Node<Object>*prv= FindPreviousNode(index);
					prv->next = new Node<Object>(item,prv->next,prv);
				}
				size++;
		}
		const Object& first(){
			return head->data;
		}
		const Object&last(){
			return FindPreviousNode(size)->data;
		}
		int indexOf(const Object&item)const{
			int index=0;
			for(Node <Object>*itr=head;itr !=NULL;itr=itr->next){
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
				head=head->next;
				if(head!=NULL){
					head->prev=NULL;
				}
			}else{
				Node<Object>*prev= FindPreviousNode(index);
				del=prev->next;
				prev->next=del->next;
				if(del->next != NULL){
					del->next->prev=prev;	
				}
			}
			delete del;
			size--;
		}
		bool find(const Object&item)const{
			for(Node <Object>*itr=head;itr !=NULL;itr=itr->next){
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
		void printNodesPositionReverseOrder(int index){
			//if(index<0 || index>=size)
			for(Node<Object>*itr=FindPreviousNode(index+1); itr != NULL;itr = itr->prev){
				cout<<itr->data<<" ";
			}
			cout<<endl;
		}
		void printReverseOrder(){
			 printNodesPositionReverseOrder(size-1);
		}
		friend ostream&operator<<(ostream&screen,DoubleLinkedList&right){
			for(Node <Object>*itr=right.head;itr !=NULL;itr=itr->next){
				screen<<itr->data<<" ";	
			}
			screen<<endl;
			return screen;
		}
		~DoubleLinkedList(){
			clear();
		}
		
	
};


#endif