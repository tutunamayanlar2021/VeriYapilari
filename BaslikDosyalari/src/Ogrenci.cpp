#include "Ogrenci.hpp"


		Ogrenci::Ogrenci(int ys,double by){
			yas=ys;
			boy=by;
			
		}
		Ogrenci::Ogrenci(){
			yas=0;
			boy=30;
			}
		void Ogrenci::YasIlerle(int ys){
			yas+=ys;
		}
		void Ogrenci::BoyUza(double by){
			boy+=by;
		}
		int Ogrenci::YasOku() const{
			return yas;
		}
		double Ogrenci::BoyOku() const{
			return boy;
		}
		Ogrenci::~Ogrenci(){
			cout<<"Cagrildi!"<<endl;
		}