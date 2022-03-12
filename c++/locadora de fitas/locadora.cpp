//este algoritimo sera para uma locadora de fitas
/*cada fita custa 1,50
 se a quantidade de fitas alugas for igual ou maior que 5 ganha 50% de desconto*/ 
#include <iostream>
using namespace std;
int main (){
	int fitas, dias, final;
	float desconto;
		cout<<"escreva a quantidade de fitas ";
		cin>>fitas;
		cout<<"\nescreva a quantidade de dias ";
		cin>>dias;
	
		desconto=fitas*dias*1.50/2;
		final=fitas*dias*1,50;
	
		if ( fitas >= 5){
			cout<<desconto;						
		}
		else{
			cout<<final;
		}
	
	
	
	
	
	return 0;
}
