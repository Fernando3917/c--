  
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int div(int vet[], int esq, int dir){
	int aux;
	int cont = dir;
	
	for(int i=esq+1; i<=dir; i++){
	
	
		if (vet[i] < vet[dir]){
			cont++; //compteur de changement, conta quantas trocas ainda faltam
			aux=vet[i];
			vet[i] = vet[cont];
			vet[cont]=aux;
		}
	}
	aux=vet[dir];
	vet[esq]=vet[cont];
	vet[cont]=aux;
	return cont;
}
void quick(int vet[], int esq, int dir){
	int pos;
	if (esq<dir){
		pos=div(vet, esq, dir);
		quick(vet, esq, pos-1);
		quick(vet, pos+1, dir);
		
	}
}
int main() {
	int vet[]={24,07,19,80,8,04,92,21,01,49};
	int n=10;
	
	quick(vet, 0, n);
	printf("\n\n\n");
	
	for (int i=0; i<n ; i++){
	
		printf("%d - ", vet[i]);
	printf("\n\n\n");
	
	system("pause");
	}
	return 0;
}

