#include <iostream>
using namespace std;

void Hanoi(int diskSayisi,char kaynak,char ara,char hedef){
	if(diskSayisi==1)
		cout<<"diski "<<kaynak<<" dan al "<<hedef<<" ye tasi"<<endl;	
	else{
		Hanoi(diskSayisi-1,kaynak,hedef,ara);
		Hanoi(1,kaynak,ara,hedef);
		Hanoi(diskSayisi-1,ara,kaynak,hedef);
	}
}


int main(){
	

	int diskSayisi;
	cout<<"Disksayisi giriniz:";
	cin>>diskSayisi;
	Hanoi(diskSayisi,'A','B','C');

	return 0;
	
	
}
