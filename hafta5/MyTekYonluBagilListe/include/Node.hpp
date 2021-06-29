#ifndef NODE_HPP
#define  NODE_HPP
#include <iostream>
using namespace std;


class Node{
	public:
		string item;
		Node *next;
		Node(const string item = "",Node *nx=NULL){
			this->item=item;
			next=nx;
		}
	
	
};


#endif