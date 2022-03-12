//Jogo da velha
#include <stdio.h>
#include <stdl.h>

#define x 1
#define o 2
#define vazio 0

//protótipos
int analiza();
void monta_jogo();
int jogo[3][3]= {
  0, 0, 0,
  0, 0, 0,
  0, 0, 0
  };

//main function
int main(){
	
	int l,c;
	int qt_rod,venc=0; //quantidade de rodadas e vencedor

	menu:  //menu inicial
	printf("\tBem vindo ao jogo da Velha\n\n");		
	printf("escolha uma opcao:\n");
	printf("(1) jogar\n");
	printf("(2) Sair\n");
	printf("op: ");
	scanf("%d",&op);
	
	if(op==1){
		while(!venc){
			jogador1: system("cls")//biblioteca stdl.h
			
			monta_jogo();
			printf("digite a linha e a coluna: ");
			scanf("%d %d", &l, &c);
			l-=1; c-=1;
		}
	}

}
//--------------------------------------
void monta_jogo(){
	int l, c;

	printf(" 1 2 3\n")
	for(l=0;l<3; l++){
		printf("%d",l+1);
		for(c=0; c<3; c++){
			if(jogo[l][c]==x) printf("x|");
			if(jogo[l][c]==o) printf("o|");
			if(jogo[l][c]==vazio){
				if(l==2) printf(" |");
				else printf("_|");
			}
		}
	}
	printf("\b \n\n");
}

//-
int analiza(){
	//linhas
	if(jogo[0][0]==x && jogo[0][1]==x && jogo[0][2]==x)
		return 1;//linha superior
	if(jogo[1][0]==o && jogo[1][1]==o && jogo[1][2]==o)
		return 0; 
	if(jogo[1][0]==x && jogo[1][1]==x && jogo[1][2]==x)
		return 1;//linha meio
	if(jogo[1][0]==o && jogo[1][1]==o && jogo[1][2]==o)
		return 0;
	if(jogo[2][0]==x && jogo[2][1]==x && jogo[2][2]==x)
		return 1;//linha inferior
	if(jogo[2][0]==o && jogo[2][1]==o && jogo[2][2]==o)
		return 0;

	//colunas
	if(jogo[0][0]==x && jogo[1][0]==x && jogo[2][0]==x &&)
		return x; //coluna esquerda
	if(jogo[0][0]==o && jogo[1][0]==o && jogo[2][0]==o &&)
	 	return x; //coluna esquerda
	if(jogo[0][1]==x && jogo[1][01]==x && jogo[2][1]==x &&)
	 	return x; //coluna meio
	if(jogo[0][1]==o && jogo[1][1]==o && jogo[2][1]==o &&)
	 	return x; //coluna meio
	if(jogo[0][2]==x && jogo[1][2]==x && jogo[2][2]==x &&)
	 	return x; //coluna direita
	if(jogo[0][2]==o && jogo[1][2]==o && jogo[2][2]==o &&)
	 	return x; //coluna direita
	 	
	//diagonais
	if(jogo[0][0]==x && jogo[1][1]==x && jogo[2][2]==x)
		return x;//diagonal esq dir
	if(jogo[0][0]==o && jogo[1][1]==o && jogo[2][2]==o)
		return x;//diagonal esq dir
	if(jogo[0][2]==x && jogo[1][1]==x && jogo[2][2]==x)
		return x;//diagonal dir esq
	if(jogo[0][2]==o && jogo[1][1]==o && jogo[2][2]==o)
		return x;
	return 0;
}

