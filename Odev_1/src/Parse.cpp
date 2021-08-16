#include "Parse.hpp"
#include <string>
using namespace std;


   
	void Parse:: divide(string str, int n){
			if (str.length() %3*n != 0 ) {
				cout << "Invalid Input: String size";
				cout << " is not divisible by n";
				return;
			}
		  
			int parts = str.length() / n;
			int start = 0;
			int it;
			
			 while(start < str.length()) {
			  it = stoi(str.substr(start, parts));
			  start += parts;
			  if(it<100){
				  it +=100;
				  sayilar->add(it);
			  }else{
				  sayilar->add(it);
			  }
			  
			
		
			}
    	   

    }
	
	
	void Parse::divide_2(string str, int n){
		
				if (str.length() %3*n != 0) {
				cout << "Invalid Input: String size";
				cout << " is not divisible by n";
				return;
			}
		  
			int parts = str.length() / n;
			int start = 0;
			int it;
		
			while(start < str.length()) {
			  
			   it = stoi(str.substr(start, parts));
				start += parts;
				
			    if(it<100){
				  it +=100;
				 sayilar_2->add(it);
			  }else{
				sayilar_2->add(it);
			  }
		   }
		    
		 
		  areIdentical(sayilar,sayilar_2);
		  
	
		}
		
	Node*Parse:: areIdentical(DoubleLinkedList *sayilar,DoubleLinkedList*sayilar_2)
	   {
			Node *a=sayilar->head ;
	     	Node *b =sayilar_2->head;
			
			
			for (int i=0;i<=sayilar->Count();i++){
				if(sayilar->GetNth(i) > sayilar_2->GetNth( i)){
				//sayilar->head=sayilar->reverse(sayilar->head);
					
				}
				if(sayilar->GetNth(i) == sayilar_2->GetNth(i)){
					if(sayilar->GetNth(i)!=0) {
						int j=0;
						while(j<=i){
						//sayilar_2->head=sayilar_2->reverse(sayilar_2->head);
							j++;
							
						}
						
					}
				}
				
				if(sayilar->GetNth(i) < sayilar_2->GetNth(i)){
					sayilar->swapto(sayilar,sayilar_2,i);
					 
					
				}
			}
      
           cout<<"sayi1:"<<*sayilar;
		   cout<<"sayi2:"<<*sayilar_2;
			delete a;
			delete b;
		
			
		 }
					
				 
					
					  
					 
					
				  
			
			
			
		
	
			