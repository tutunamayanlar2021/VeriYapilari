#include "DoublyLinkedList.hpp"

      Node* DoubleLinkedList::FindPreviousNode(int index){
				Node*prev=head;
				int i=1;
				for(Node*itr=head; itr->next!=NULL && i!=index; itr=itr->next,i++){
					prev=prev->next;
				
					
					
					
				}
				return prev;
			}
	

    DoubleLinkedList:: DoubleLinkedList(){
			head = NULL;
			size=0;
		}
		int DoubleLinkedList:: Count()const{
			return size;
		} 
	
		void DoubleLinkedList::add(const int item){
			insert(size,item);
		}
		int DoubleLinkedList::insert(int index, const int item){
			
				if(index==0){
					head = new Node(item,head,NULL);//UNUTMA
					if(head->next !=NULL){
						head->next->prev=head;
				
					}
				}
				else{
					Node*prv= FindPreviousNode(index);
					prv->next = new Node(item,prv->next,prv);
				}
				size++;
		}
		
		int DoubleLinkedList::GetNth( int index)
		{
	 
			Node* current = head;
			int count = 0;
			while (current != NULL) {
				if (count == index)
					return (current->data);
				count++;
				current = current->next;
			}
			
		}
		 void DoubleLinkedList::swapto(DoubleLinkedList *lis1, DoubleLinkedList *lis2, int sira)
    {
        Node *tmp = new Node(0,NULL,NULL);
        Node *tmp2 = new Node(0,NULL,NULL);
        Node *tmp3 = new Node(0,NULL,NULL);
        tmp3->next = lis2->FindPreviousNode(sira);
        tmp2->next = lis1->FindPreviousNode(sira);
        tmp->next = lis1->FindPreviousNode(sira)->next;
        tmp->prev = lis1->FindPreviousNode(sira)->prev;

        lis1->FindPreviousNode(sira - 1)->next = lis2->FindPreviousNode(sira);
        lis2->FindPreviousNode(sira - 1)->next = tmp2->next;
        lis1->FindPreviousNode(sira - 1)->next->prev = lis1->FindPreviousNode(sira - 1);
        lis2->FindPreviousNode(sira - 1)->next->prev = lis2->FindPreviousNode(sira - 1);
        
        lis2->FindPreviousNode(sira)->next = lis1->FindPreviousNode(sira + 1);
        lis1->FindPreviousNode(sira)->next = tmp->next;
        lis2->FindPreviousNode(sira)->next->prev = tmp2->next;
        lis1->FindPreviousNode(sira)->next->prev = tmp3->next;


        delete tmp;
        delete tmp2;
        delete tmp3;
    }
		Node *DoubleLinkedList::reverse(Node*head)
		{
			
			 Node* current = head;
			 Node* previous = NULL;
			 Node* nextNode = NULL;
			 while(current != NULL)
			 {
				nextNode = current->next;
				current->next = previous;
				previous = current;
				current = nextNode;
			 }
			 return previous;
			
		}

		 ostream &operator<<(ostream&screen,DoubleLinkedList&right){
			for(Node*itr=right.head;itr !=NULL;itr=itr->next){
				screen<<itr->data;	
		}
			screen<<endl;
			return screen;
		}
		
		
		DoubleLinkedList::~DoubleLinkedList(){
			delete head;
			
		}