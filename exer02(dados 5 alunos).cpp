/*02)	Construa uma estrutura aluno com nome, n�mero de matr�cula e curso. Leia do usu�rio a informa��o de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
#define tam 2
struct aluno{
	
	string nome;
	int numero_matricula;
	string nome_curso;	
};

int main(){
	
	aluno x[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"Nome =";	
		getline(cin,x[i].nome);
		cout<<"Matr�cula = ";
	//	cin.ignore();
		cin>>x[i].numero_matricula;
		cout<<"Nome do Curso =";
		cin.ignore();	
		getline(cin,x[i].nome_curso);
		system("cls");
	}
	system("cls");
	for(int i=0;i<tam;i++){
		cout<<"Aluno = "<< x[i].nome;
		cout<<"\n";
		cout<<"Matr�cula = "<<x[i].numero_matricula;
		cout<<"\n";
		cout<<"Nome do Curso="<<x[i].nome_curso;
		cout<<"\n";
		cout<<"_____";
		cout<<"\n";
		}
	return 0;

}
