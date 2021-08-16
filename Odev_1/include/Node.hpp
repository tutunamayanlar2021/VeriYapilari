/** 
* @file Node.hpp 
* @description  düğüm oluşturma
* @course 1. Öğretim B
* @assignment 1.Ödev
* @date 14.08.2021
* @author  Kader Oral |  kadriye.oral@ogr.sakarya.edu.tr
*/
#ifndef NODE_HPP
#define  NODE_HPP
using namespace std;
#include <iostream>



class Node{
	public:
		int data;
		Node *next;
		Node *prev;
		
		Node(const int ,Node*,Node*);
		
		
			
};


#endif