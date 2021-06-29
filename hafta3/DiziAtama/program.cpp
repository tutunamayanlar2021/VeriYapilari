#include <iostream>
using namespace std;

class Kisi{
	private:
		string isim;
		int yas;
	public:
		Kisi(string ism){
			isim=ism;
			yas=0;
		}
		friend ostream& operator<<(ostream&ekran,Kisi&sag){
			ekran<<sag.isim<<"	"<<sag.yas<<endl;
			return ekran;
		}
		~Kisi(){
			
		}
};
bool EsitMi(int *d1,int *d2,int u1,int u2){
	 if(u1!=u2)return false;
	for(int i=0;i<u1;i++){
		if(d1[i] != d2[i])return false;
	}
	return true;
	
}


int main(){
	/*int a=100;
	int b;
	b=a;
	cout<<b;*/
	//**********eleman kopyalama ******************
	/*int a[]={3,8,10};
	int b[3];
	for(int i=0;i<3;i++){
		b[i]=a[i];
	}
	cout<<b[1];
	*/
//**********dizi karşilaştırma ******************
	int a[]={1,2,3},b[]={1,2,3};
	if(EsitMi(a,b,3,3))cout<<"esit";
	else cout<<	"esit degil";//eşit değil olur cünkü a ve b nin adresleri eşit değil
	
	return 0;
	
	
	
	
	
	

} 