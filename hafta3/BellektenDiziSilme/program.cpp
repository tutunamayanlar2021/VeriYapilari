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


int main(){
	
	Kisi **kisiler=new Kisi*[10];
	for(int i=0;i<10;i++){
		kisiler[i]=new Kisi("Kader");
	}
	for(int i=0;i<10;i++){
		cout<<*kisiler[i]<<endl;
	}
	for(int i=0;i<10;i++){
		
		delete kisiler[i];//olusturulun kisileri sildik
	}
	delete [] kisiler;//diziyi sildik
	return 0;
	
	
	
	
	
	
	
	
	

} 