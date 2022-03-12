#include <iostream>

using namespace std;


int dividir(int vetor, int esq, int dir){
	int aux;
	int cont = esq;
	
	for (int i=esq+1 ; i<= dir; i++){
		
		if(vetor[i],vetor[esq]){
			cont++
			aux=vetor[i];
			vetor[i]=vetor[cont];
			vetor[cont]=aux;
			
		}
	}
	aux=vetor[esq];
	vetor[esq]=vetor[cont];
	vetor[cont]=aux;
	
	return cont;
}



void quicksort(int vetor[], int esq, int dir){	

	int pos;
	if (esq<direita){
		pos = dividir(vetor,esq,dir);
		quicksort(vetor,esq,dir, pos-1);
		quicksort(vetor,pos+1, dir);
	}	
}

	int main (){
		
		int vetor[0]={6,3,5,4}
		int n=4 
		
		quicksort(vetor,0,n);
		
		cout<<"\n\n\n";
		for(int i=0;i<n;i++)
			cout<<"%d-",vetor[i]);
			cout<<"\n\n\n";
			





	system ("pause");
	return 0;
}
