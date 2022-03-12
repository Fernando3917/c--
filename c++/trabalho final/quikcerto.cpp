  
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int div(int vecteur[], int gauche, int droite){
	//changement de position -> aux
	int aux;
	int cont = gauche;
	
	for(int i=gauche+1; i<=droite; i++){
	
	
		if (vecteur[i] < vecteur[gauche]){
			cont++; //compteur de changement, conta quantas trocas ainda faltam
			aux=vecteur[i];
			vecteur[i] = vecteur[cont];
			vecteur[cont]=aux;
		}
	}
	aux=vecteur[gauche];
	vecteur[gauche]=vecteur[cont];
	vecteur[cont]=aux;
	return cont;
}
void quick(int vecteur[], int gauche, int droite){
	int pos;
	//initialise avec 0 < 10 et pas 10 < 0
	if (gauche<droite){
	//on divise le vecteur et on ordonne
		pos=div(vecteur, gauche, droite);
		quick(vecteur, gauche, pos-1);
		quick(vecteur, pos+1, droite);
		
	}
}
int main() {
	int vecteur[]={24,07,19,80,8,04,92,21,01,49};
	int n=10;
	
	quick(vecteur, 0, n);
	printf("\n\n\n");
	
	for (int i=0; i<n ; i++){
	
		printf("%d - ", vecteur[i]);
	printf("\n\n\n");
	
	system("pause");
	}
	return 0;
}
