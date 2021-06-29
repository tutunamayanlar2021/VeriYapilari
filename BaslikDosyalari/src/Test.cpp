#include "Ogrenci.hpp"
int main(int argc,char *argv[]){
	//cout<<"hello world"<<endl;
	//cout<<argc;
	Ogrenci o1,o2(5,135);
	cout<<"Ogrenci 1:"<<endl;
	cout<<"Yas:"<<o1.YasOku()<<endl;
	cout<<"Boy:"<<o1.BoyOku()<<endl;
	o2.YasIlerle(5);
	o2.BoyUza(20);
	cout<<"Ogrenci 2:"<<endl;
	cout<<"Yas:"<<o2.YasOku()<<endl;
	cout<<"Boy:"<<o2.BoyOku()<<endl;
	return 0;
	
}