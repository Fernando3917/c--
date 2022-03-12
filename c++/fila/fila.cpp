//exercicio do tipo fila


#include <iostream>
#include <conio.h>
using namespace std;

const int MAXTAM=3;

 //------------ ---- -- -- -- Classe Fila com vetor
class TipoFila{
	private:
		string Item[MAXTAM];
		int frente, tras, Quantos;
	
	public:
		TipoFila ();
		int vazia ();
		int cheia ();
		int tamanho();
		void enfileirar (int &Elemento);
		void desenfileirar (int &Elemento);
	}; 
//---- --  - -- - - - - ---- - - FIM da classe

TipoFila:: TipoFila()//construtor padrao 
{frente = tras=Quantos=0;}
//----- --- -- - - -  - - - -- 
int TipoFila::vazia()
{return (Quantos==0);}
//--- --  - ---- --- ----------- - - --
int TipoFila::cheia()
{return (Quantos==MAXTAM);}
//------- -- - - - --- - -  - - - - - -- 
int TipoFila::tamanho()
{return (Quantos);}
//-  -    -- - - ----- --- --- --------
void TipoFila::enfileirar (int &Elemento)
{
	if(cheia()){
		cout<<"fila cheia. \n";
		getch();
	}
	else{
		Item [tras]=Elemento;
		cout<<"Elemento"<<Item[tras]<<"na fila \n";
		getch();
		Quantos++;
		
		tras = (tras + 1) % MAXTAM; //ou o programa para, ou reinicia
	}
	return;
}
//------ ---------------- -------------- ------------------ -----------------
void TipoFila :: desenfileirar(int &Elemento){
	
	if (vazia()){
		cout<<"fila vazia. \n";
		getch();
	}	
	else{
		Item [frente]=Elemento;
//		Elemento = Item [frente];
		cout<<Item [frente]<<"retirado da fila\n";
		Quantos--;
		frente= (frente + 1) % MAXTAM;
		getch();
	}
		
	
}
//--   - ---- - --- - - - -- --- -  - - - ---- - - - -  - -  - - --  - - -   -   
int main (){
	int n,i;
	TipoFila s;
	int x,op;
	
	do{
		system("cls");
		cout<<"\t\t\t FILA ESTATICA"
		<<"\n\n digite uma opcao: "
		<<"\n\n 1-enfileirar"
		<<"\n\n 2-desenfileirar";
		cin>>op;
		
		if (op==1){
			cout<<" digite um item a ser inserido na fila: ";
			cin>>x;
			cout<<"==================================";
			s.enfileirar(x);
		}
		if (op==2){
			s.desenfileirar(i);
		}
		}while (op==1 || op==2);
		system ("pause");
		return 0;
}	




























