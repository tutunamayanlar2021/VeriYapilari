#include <iostream>
#include <ctime>
using namespace std;


const int sutun=3;
void Yazdir(int d[][sutun],int satir){
	for(int i=0;i<satir;i++){
		for(int j=0;j<sutun;j++){
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main(){
	srand(time(NULL));//random degeri sifirlar boylece her seferinde farklı degerler döner
	int sayilar[4][sutun];
	for(int i=0;i<4;i++){
		for(int j=0;j<sutun;j++){
			sayilar[i][j]=rand()%9+1;
		}
	
	}
	Yazdir(sayilar,4);
	
	return 0;
	
	
	
	
	
	

} 