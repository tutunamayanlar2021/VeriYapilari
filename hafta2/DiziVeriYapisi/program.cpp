#include <iostream>
using namespace std;
int *DiziOlusturSifirla(int uzunluk){
	int sayilar[uzunluk];
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
	cout<<p[2];//hatalı !!!!!!!!!!!!!!!!!!çünkü p iade edilmiş bir adres tutuyor 
	

	return 0;
	
	
	
	
	
	
	
	
	
	
	//***************1*************************
	
	/*int dizi[]={1,2,3};
	int *p=dizi;
	cout<<*p<<endl;//1 gelir 
	p++;//adresi 4 bayt daha artırır. ekrana 2 yazılır
    cout<<*p<<endl;*/
	
} 