#ifndef ARRAYLIST_HPP
#define ARRAYLIST_HPP
#include <iostream>
using namespace std;

template<typename Object>

class ArrayList{
	private:
		Object*items;
		int lenght;
		int capacity;
		void reserve(int newCapacity){
			Object* tmp=new Object[newCapacity];
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
			items= new Object[capacity];
		}
		int size()const{
			return lenght;
		}
		bool isEmpty()const{
			return lenght==0;
		}
		void add(const Object& item){
			insert(lenght,item);
		}
		void insert(int index,const Object& item){
			//if(index<0 || index>lenght) hata
			
			if(lenght==capacity)
				reserve(2*capacity);
			for(int i=lenght;i>=index;i--){
				items[i+1]=items[i];
			}
			items[index]=item;
			lenght++;
		}
		const Object& first()const{
			//if(lenght==0) throw hata
			return items[0];
			
		}
		const Object& last()const{
			//if(lenght==0) throw hata
			return items[lenght-1];
			
		}
		int indexOf(const Object&item )const{
			for(int i=0;i<lenght;i++){
				if(items[i]==item)return i;
			}
			throw "Hata";
		}
		const Object& elementAt(int index){
			//if(index<0 || index>=lenght) hata
			return items[index];
		}
		void remove(const Object&item){
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
		friend ostream& operator<<(ostream&screen,ArrayList<Object>& right){
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