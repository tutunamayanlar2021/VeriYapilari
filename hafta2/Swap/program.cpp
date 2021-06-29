#include <iostream>
using namespace std;

class Sayi{

	
	public:
		int *p;
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
	Sayi *s1=new Sayi(100);
	Sayi *s2=new Sayi(300);
	//cout<<"s1:"<<*s1<<endl;
	//cout<<"s2:"<<*s2<<endl;
	/*int *yedek;
	yedek=s1->p;
	s1->p=s2->p;
	s2->p=yedek;*/
	//cout<<"s1:"<<*s1<<endl;
	//cout<<"s2:"<<*s2<<endl;
	delete s1;
	delete s2;
	
	
	
	
	/*int a=100,b=300;
	int yedek =a;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	a=b;
	b=yedek;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;*/
	
	

	
	return 0;
	
} 