#include <iostream>
using namespace std;
int *DiziOlusturSifirla(int uzunluk){
	int *sayilar = new int [uzunluk];
	for(int i=0;i<uzunluk;i++){
		sayilar[i]=0;
	}
	return sayilar;
}


int main(){
	
	
	int uzunluk ;
	cout<<"uzunluk:";
	cin>>uzunluk;
	int sayilar[uzunluk];
	for(int i=0;i<uzunluk;i++){
		sayilar[i]=0;
	}
	int *p=DiziOlusturSifirla(uzunluk);
	cout<<p[2];
	delete[]p;
	

	return 0;
	
	
	
	
	
	
	
	
	

} 