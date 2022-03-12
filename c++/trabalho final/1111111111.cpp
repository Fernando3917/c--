#include <iostream>
namespace std;

void quick(int *v, left, int, right){
	int  i= left,j= right;
	int temp;
	int pivot = v[(left + right) / 2];
	
	while (i <= j) {
		while (v[i] < pivot)
			 i++;
		while (v[j] > pivot)
		   j--;
        if (i <= j) {
        	tmp = v[i];  
			v[i] = v[j];      
			v[j] = tmp;
			i++;    j--;
	}
	};
	if (left < j)
		quicksort(v, left, j);
    if (i < right)
    	quicksort(v, i, right);
			                  
	
	
}








//int main (){
	
//	int n=10
//	int vetor[n] = {24,7,19,80,8,4,92,21,1,49};
	
	system (pause);
	return 0;
	
}
