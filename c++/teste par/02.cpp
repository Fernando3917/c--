#include<iostream>
using namespace std;
int testepar (int n){
	n=n+5;
	return n;
}
int main(){
	int r, x =7;
	cout<<"main: valor de x antes: "<<x<<"\n";
	r=testepar(x);
	cout<<"main: valor de x depois: "<<x<<"\n";
	cout<<"main: valor de r: "<<r<<"\n";
	return 0;
//	system(pause)
}
