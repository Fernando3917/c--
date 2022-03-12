#include <iostream>
using namespace std;


struct aluno{
	int idade;
	string nome;
	float nota;
};

int main ()
{
	aluno a[10];
	
	cout<<"escreva o nome do aluno: ";
	cin>>a[1].nome;
	cout<<"\nIdade: ";
	cin>>a[1].idade;
	cout<<"\nnota: ";
	cin>>a[1].nota;
	
	cout<<"\nnome e: "<<a[1].nome;
	cout<<"\nidade e: "<<a[1].idade;
	cout<<"\nnota:\n "<<a[1].nota;
	
	
	system("pause");
	return 0;
	
}

