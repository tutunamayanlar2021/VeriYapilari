#include <iostream>
using namespace std;
class Ogrenci{
	private:
		int yas;
		double boy;
	public:
		Ogrenci(int ys,double by){
			yas=ys;
			boy=by;
			
		}
		Ogrenci(){
			yas=0;
			boy=30;
			}
		void YasIlerle(int ys){
			yas+=ys;
		}
		void BoyUza(double by){
			boy+=by;
		}
		int YasOku() const{
			return yas;
		}
		double BoyOku() const{
			return boy;
		}
		~Ogrenci(){
			cout<<"Cagrildi!"<<endl;
		}
	
};
int main(int argc,char *argv[]){
	//cout<<"hello world"<<endl;
	//cout<<argc;
	Ogrenci o1,o2(5,135);
	cout<<"Ogrenci 1:"<<endl;
	cout<<"Yas:"<<o1.YasOku()<<endl;
	cout<<"Boy:"<<o1.BoyOku()<<endl;
	o2.YasIlerle(5);
	cout<<"Ogrenci 2:"<<endl;
	cout<<"Yas:"<<o2.YasOku()<<endl;
	cout<<"Boy:"<<o2.BoyOku()<<endl;
	return 0;
	
}