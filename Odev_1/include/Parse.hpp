/** 
* @file Parse.hpp 
* @description  elemanlari üçlü gruba parçalama ve listeye ekleme
* @course 1. Öğretim B
* @assignment 1.Ödev
* @date 14.08.2021
* @author  Kader Oral |  kadriye.oral@ogr.sakarya.edu.tr
*/
#ifndef PARSE_HPP
#define PARSE_HPP
#include"DoublyLinkedList.hpp"
#include "Node.hpp"
class Parse {
	public:
	 DoubleLinkedList * sayilar_2= new DoubleLinkedList();
	 DoubleLinkedList  *sayilar = new DoubleLinkedList();

		void divide(string , int );
		void divide_2(string , int );
		Node *areIdentical(DoubleLinkedList* ,DoubleLinkedList*);
			
       
	   

	
};


#endif