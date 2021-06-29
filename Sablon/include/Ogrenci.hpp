#ifndef OGRENCI_HPP
#define OGRENCI_HPP
#include "Sebze.hpp"
#include "Meyve.hpp"
#include <iostream>
using namespace std;
class Ogrenci{
	private:
		int yas;
		double boy;
		double kilo;
	public:
		Ogrenci(int ys,double by,double kl){
			yas=ys;
			boy=by;
			kilo=kl;
			
		}
		Ogrenci(){
			yas=0;
			boy=30;
			kilo=10;
			}
		template <typename Yiyecek>
		void YemekYe(Yiyecek yiyecek){
			kilo +=(yiyecek.getKalori()/1000);
		}
		/*void YemekYe(Meyve myv){
			kilo +=(myv.getKalori()/1000);
		}*/
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
		double KiloOku()const{
			return kilo;
		}
		friend ostream& operator<<(ostream& ekran,Ogrenci&sag){
			ekran<<"Ogrenci :"<<endl;
			ekran<<"Yas:"<<sag.yas<<endl;
			ekran<<"Boy:"<<sag.boy<<endl;
			ekran<<"Kilo:"<<sag.kilo<<endl;
			return ekran;
		}
		~Ogrenci(){
			cout<<"Cagrildi!"<<endl;
		}
};

		
#endif