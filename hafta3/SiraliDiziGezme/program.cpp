#include <iostream>
using namespace std;

bool ikiliArama(int sayilar[],int baslangic,int bitis,int aranan){
		int ortaIndis= (baslangic+bitis)/2;
		if(bitis<baslangic)return false;
		if(sayilar[ortaIndis]==aranan)return true;
		
		if(aranan<sayilar[ortaIndis]){
			return ikiliArama(sayilar,baslangic,ortaIndis-1,aranan);	
		}
		if(aranan>sayilar[ortaIndis]){
			return ikiliArama(sayilar,ortaIndis+1,bitis,aranan);	
		}
		
}
int main(){
	
	int dizi[]={5,26,33,47,51,58,69,75,88,94,101};
	int x;
	cout<<"Bir sayi giriniz:";
	cin>>x;
	if(ikiliArama(dizi,0,10,x)) cout<<	"Sayi var";
	else cout<<"Sayi yok";
	return 0;
	
	
}
