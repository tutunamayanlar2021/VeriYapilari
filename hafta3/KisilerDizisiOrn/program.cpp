#include <iostream>
#include <ctime>
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
		
	
};

void Yazdir(Kisi **kisiDizi,int kisiSayisi){
	for(int i=0;i<kisiSayisi;i++){
		cout<<*kisiDizi[i];
	}
	
}
void Yoket(Kisi **kisiDizi,int kisiSayisi){
	for(int i=0;i<kisiSayisi;i++){
		delete kisiDizi[i];
	}
	
}


int main(){
	Kisi **kisiler = new Kisi*[3];
	kisiler[0]=new Kisi("Ahmet");
	kisiler[1]=new Kisi("Ali");
	kisiler[2]=new Kisi("Kader");
	Yazdir(kisiler,3);
	Yoket(kisiler,3);
	delete []kisiler;
	return 0;
	
	
	
	
	
	

} 