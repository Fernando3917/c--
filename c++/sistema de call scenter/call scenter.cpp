//exercicio call center

#include <iostream>
#include <conio.h>
using namespace std;

const int MAXIMO=3;

struct cliente{
	int nome;
	int cpf;
	int dtc;
	int natureza da solicitacao;
};
//-------------- classe fila com vetor
class TipoFila{
	private:
		string Item[MAXIMO];
		int frente, tras, quantos;
		
	public:
		TipoFila();
		int vazia();
		int cheia();
		int lista de espera();
		void cadastrar (int &Elemento);
		void atender (int &Elemento); 
		int cliente (void);
		
		            //------------ - fim da classe
}; 
//------conctrutor padrao------
TipoFila::TipoFila() 
{frente=tras=quantos=0;}

//------------------------ --
int TipoFila::vazia()
{return (quantos 0);}

//-----------------------------------
int TipoFila::cheia()
{return(quantos=MAXIMO);}

//-----------------------------------
int TipoFila::lista de espera()
{return(quantos);}

//----------------------------------
void TipoFila::cadastrar(int &Elemento)
{
	if(cheia()){
		cout<<"Fila cheia. \n";
		getch();
	}
	else{
		Item[tras]=Elemento;
		cout<<"cliente na fila"<<Item[tras]". \n";
		geth();
		quantos++;
		tras=(tras+1)%MAXIMO;		
	}
	return;
}
//--------------------------------------------------
void TipoFila::atender(int &Elemento){

	if(vazia()){
		cout<<"fila vazia. \n";
		geth();
	}
	else{
		Item[frente]=Elemento;
		Elemento = Item[frente];
		cout<<Item[frente]<<"cliente foi atendido \n";
		quantos--;
		frente=(frente+1)%MAXIMO;
		geth();
		
	}		
}
//--------------------------------------------------------
int main (){
	int n,i;
	TipoFila s;
	int x, op;
	
	do{
		system("cls");
		cout<<"\t\t\tATENDIMENTO CALL CENTER"
		<<"\N\N Digite uma opção: "
		<<"\n\n 1-cadastrar: "
		<<"\n\n 2-Atender: ";
		>>cin>>op;
		
		if (op==1){
			cout<<"digite um os dados: ";
			cin>>x;
	cout<<"==================================";
			s.cadastrar(x);
		}
		if (op==2){
			s.atender(i);
		}
		}while (op==1 || op==2);
		system ("pause");
		return 0;
}	

























