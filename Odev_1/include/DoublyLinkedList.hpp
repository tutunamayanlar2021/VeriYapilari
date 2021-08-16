/** 
* @file DoublyLinkedList.hpp 
* @description liste özellikleri
* @course 1. Öğretim B
* @assignment 1.Ödev
* @date 14.08.2021
* @author  Kader Oral |  kadriye.oral@ogr.sakarya.edu.tr
*/
#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP
#include "Node.hpp"
#include <iostream>
class DoubleLinkedList{
	
		public:
		Node*head;
		int size;
		Node* FindPreviousNode(int index);
		DoubleLinkedList();
		int  Count()const;
		void add(const int);
		int insert(int index, const int );
		int GetNth( int index);
		void swapto(DoubleLinkedList *, DoubleLinkedList *, int );
		Node *reverse(Node*);
		friend ostream &operator<<(ostream &screen, DoubleLinkedList &right);
		 ~DoubleLinkedList();
			
		
		
	
};


#endif