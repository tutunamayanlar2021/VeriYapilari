#include <iostream>
using namespace std;
int main(){
	int a=10;
	int b=10;
	int *p,*r;
	p=&a;
	r=&b;
	/*if(a==b)cout<<"esit";
	else cout<<"esit değil";*/
	/*if(r==p)cout<<"esit";
	else cout<<"esit degil";*/
	if(*r==*p)cout<<"esit";
	else cout<<"esit degil";
} 