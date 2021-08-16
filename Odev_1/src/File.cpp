#include "File.hpp"
#include "Parse.hpp"


    void File:: readFile(){
			string  array[8620];
			string  array_2[8620];
			string  str_1;
			string  str_2;  
		ifstream dosyaOku("doc/Sayilar.txt");
		  if ( dosyaOku.is_open() ){
				while(dosyaOku.get(karakter)&&karakter !='#'){
					
					array[loop] += karakter;
					loop++;
				}
				loop++;
				while(dosyaOku.get(karakter)){
					array_2[loop] += karakter;
					loop++;
				}
			}
			for(int i=0;i<=loop;i++){
					str_1 += array[i];
				}
				 
				
			for(int j=0;j<loop;j++){
					str_2 += array_2[j];
				}
				
				
			Parse *par =new Parse();
			par->divide(str_1,str_1.length()/3);
			par->divide_2(str_2,str_2.length()/3);
		    delete par;
			dosyaOku.close();
			
		   
		   
        }


