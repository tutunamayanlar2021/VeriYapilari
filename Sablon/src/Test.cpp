#include "Sebze.hpp"
#include "Meyve.hpp"
#include "Ogrenci.hpp"
int main(int argc,char *argv[]){
	//cout<<"hello world"<<endl;
	//cout<<argc;
	Ogrenci o1,o2(5,135,60);
	cout<<o1;
	o2.YasIlerle(5);
	Sebze havuc(500);
	Meyve elma(700);
	//o2.YemekYe(havuc);
	//o2.YemekYe(elma);
	o2.YemekYe<Sebze>(havuc);
	o2.YemekYe<Meyve>(elma);
	cout<<o2;
	return 0;
	
}