#include <iostream>
using namespace std;


struct aluno{
	int idade;
	string nome;
	float nota;
};

int main ()
{
	aluno classOfSchool[10];
	
	for( count=0; count<11; count++){
		
		cout<<"escreva o nome do aluno: ";
		cin>>classOfSchool[count].nome;
		cout<<"\nIdade: ";
		cin>>classOfSchool[count].idade;
		cout<<"\n"+"nota: ";
		cin>>classOfSchool[count].nota;
	
		cout<<"\nnome e: "<<classOfSchool[count].nome;
		cout<<"\nidade e: "<<classOfSchool[count].idade;
		cout<<"\n"+"nota: "<classOfSchool[count].nota;
		
	}
	
	
	
	system("pause");
	return 0;
	
}
