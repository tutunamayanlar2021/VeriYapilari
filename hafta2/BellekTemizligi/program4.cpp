#include <iostream>
using namespace std;

class Sayi{
	private:
		int *p;
	public:
		Sayi(int dgr){
			p=new int(dgr);
		}
		Sayi(){
			p=new int(0);
		}
		friend ostream& operator<<(ostream&ekran,Sayi& sag){
			ekran<<*sag.p;
			return ekran;
		}
		~Sayi(){
			delete p;
		}
};
int main(){
	
	
	Sayi *s1= new Sayi(100);
	//cout<<s1<<endl;//adres
	cout<<*s1<<endl;//deger
	delete s1;
			
	
	
	
	
	
	
	
//***********************************
	/*int x=10,y=3;
	double z=x/y;
	cout<<z;//3 döner (int)*/
	
//***********************************
	/*int x=10;
	double y=3;
	double z=x/y;
	cout<<z;//3.333 döner (double)*/
//***********************************

	/*auto z=1024*1024*1024*5.0;
	cout<<z;*/

	
	return 0;
	
} 