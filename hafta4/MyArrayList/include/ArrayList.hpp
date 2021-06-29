#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP
#include <iostream>
using namespace std;


class ArrayList{
	private:
		string *items;
		int lenght;
		int capacity;
		void reserve(int newCapacity){
			string * tmp=new string[newCapacity];
			for(int i=0;i<lenght ;i++){
				tmp[i]=items[i];
				delete[]items;
				items=tmp;
				capacity = newCapacity; 
			}
			
		}
	public:
		ArrayList(){
			lenght=0;
			capacity=100;
			items= new string[capacity];
		}
		int size()const{
			return lenght;
		}
		bool isEmpty()const{
			return lenght==0;
		}
		void add(const string item){
			insert(lenght,item);
		}
		void insert(int index,const string item){
			//if(index<0 || index>lenght) hata
			
			if(lenght==capacity)
				reserve(2*capacity);
			for(int i=lenght;i>=index;i--){
				items[i+1]=items[i];
			}
			items[index]=item;
			lenght++;
		}
		 const string  first()const{
			//if(lenght==0) throw hata
			return items[0];
			
		}
		const string last()const{
			//if(lenght==0) throw hata
			return items[lenght-1];
			
		}
		int indexOf(const string item )const{
			for(int i=0;i<lenght;i++){
				if(items[i]==item)return i;
			}
			throw "Hata";
		}
		const string elementAt(int index){
			//if(index<0 || index>=lenght) hata
			return items[index];
		}
		void remove(const string item){
			int index=indexOf(item);
			removeAt(index);
		}
		void removeAt(int index){
			for (int i=index+1;i<lenght ;i++){
				items[i-1]=items[i];
			}
			lenght--;
		}
		void clear(){
			lenght=0;
		}
		friend ostream& operator<<(ostream&screen,ArrayList& right){
			screen<<endl;
			for (int i=0;i<right.lenght;i++){
				screen<<right.items[i];
				if(i+1 !=right.lenght) screen<<" || ";
			}
			return screen;
		}
		~ArrayList(){
			delete[] items;
		}
	
};
	


#endif 