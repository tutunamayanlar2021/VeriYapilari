#include"ArrayList.hpp"
int main(){
	
	ArrayList <string> *isimler= new ArrayList<string>();
	int sec=0;
	string isim;
	int konum;
	
	do{
		system("CLS");
		cout<<	"1-Isim ekle "<<endl;
		cout<<	"2-Isim sil "<<endl;
		cout<<	"3-Konumdan isim sil "<<endl;
		cout<<	"4-Konumdan isim ekle"<<endl;
		cout<<	"5-Konum bul "<<endl;
		cout<<	"6-Isim Sayisi "<<endl;
		cout<<	"7-Ilk isim "<<endl;
		cout<<	"8-Son isim "<<endl;
		cout<<	"9-Isimleri listele "<<endl;
		cout<<	"10-Isimleri temizle"<<endl;
		cout<<	"11-Cikis"<<endl;
		cout<<	"Secim:";
		cin>>sec;
		switch(sec){
			case 1:
				cout<<"isim:";
				cin.ignore();
				getline(cin,isim);
				isimler->add(isim);
			break;
			
			case 2:
				cout<<"isim:";
				cin.ignore();
				getline(cin,isim);
				isimler->remove(isim);
			break;
			
			
			case 3:
				cout<<	"Konum:";
				cin>>konum;
				isimler->removeAt(konum);
			break;
			
			case 4:
				cout<<	"Konum:";
				cin>>konum;
				cout<<"isim:";
				cin.ignore();
				getline(cin,isim);
				isimler->insert(konum,isim);
			break;
			
			case 5:
				cout<<"isim:";
				cin.ignore();
				getline(cin,isim);
				cout<<"Konumu:"<<isimler->indexOf(isim)<<endl;
				cin.ignore();
				cin.get();
			break;
			
			case 6:
				cout<<"isim sayisi:"<<isimler->size()<<endl;
				cin.ignore();
				cin.get();
			
			break;
			
			case 7:
				cout<<"Ilk isim:"<<isimler->first()<<endl;
				cin.ignore();
				cin.get();
			break;
			
			case 8:
				cout<<"Son isim :"<<isimler->last()<<endl;
				cin.ignore();
				cin.get();
			break;
			
			case 9:
				cout<<*isimler;
				cin.ignore();
				cin.get();
			break;
			
			case 10:
			isimler->clear();
			break;
			
			case 11:
			break;
			
			default:
				cout<<" yanlis tercih";
			break;
		}
		
	}while(sec !=11);
	
	delete isimler;
	
	
	return 0;
}
