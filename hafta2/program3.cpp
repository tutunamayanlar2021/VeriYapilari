#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *p=&a;
	int **pp=&p;
	cout<<	" a nin degeri:"<<a<<endl;
	cout<<	" a nin adresi:"<<&a<<endl;
	cout<<	" p nin degeri:"<<p<<endl;
	cout<<	" p nin adresi:"<<&p<<endl;
	cout<<	" p nin gosterdiği deger:"<<*p<<endl;
	cout<<	" pp nin degeri:"<<pp<<endl;
	cout<<	" pp nin adresi:"<<&pp<<endl;
	cout<<	" pp nin gosterdiği deger:"<<**pp<<endl;
	return 0;
	
} 