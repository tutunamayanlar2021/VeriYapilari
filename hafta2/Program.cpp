#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
	int a=10;
	int *p,*r;
	p=&a;//a nın adresini p in içine attık.
	//a++;
	//*p=100;
	r=p;//r anın adresini tutar 
	*r=50;
	
	
	cout<<*p<<endl;
	//cout<<&a<<endl;//& adres operatörüdür.
	//cout<<p<<endl;// a nın adresini getirir
	//cout<<&p<<endl;//p nin adresini getirir
	//cout<<*p<<endl;//p nin tuttuğu adrese git ordaki degeri yazdır.
	return 0;
}