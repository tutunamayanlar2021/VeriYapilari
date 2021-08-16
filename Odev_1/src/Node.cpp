#include "Node.hpp"

Node::Node(const int data,Node*nx=NULL,Node*pr=NULL){
			this->data=data;
			next=nx;
			prev=pr;
		}