/*Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos:
Matricula, Nome, Código da Disciplina, Nota1 e Nota2.
Considere uma turma de até 10 alunos. Após ler todos os dados digitados,
e depois de armazená-los em um vetor de estrutura,
exibir na tela a listagem final dos alunos com as suas respectivas médias finais
(use uma média ponderada: Nota1 com peso=4,0 e Nota2 com peso=6,0).
*/
#include <iostream>

using namespace std;

struct ALUNO{
	
	int matricula;
	string nome;
	int coddiciplina;
	int nota1;
	int nota2;	
};

int main(){
	
	int tam=2;
	ALUNO aluno[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"matricula aluno: "<<i+1<<": ";
		cin>>aluno[i].matricula;
		cout<<"\nnome aluno: "<<i+1<<": ";
		cin>>aluno[i].nome;
		cout<<"\ncod diciplina aluno: "<<i+1<<": ";
		cin>>aluno[i].coddiciplina;
		cout<<"\nnota1 aluno: "<<i+1<<": ";
		cin>>aluno[i].nota1;
		cout<<"\nnota2 aluno: "<<i+1<<": ";
		cin>>aluno[i].nota2;
		
	}
	
	for(int i=0;i<tam;i++){
		cout<<"\n\n\nmatricula aluno "<<i+1<<": ";
		cout<<aluno[i].matricula;
		cout<<"\nnome aluno "<<i+1<<": ";
		cout<<aluno[i].nome;
		cout<<"\ncod diciplina aluno "<<i+1<<": ";
		cout<<aluno[i].coddiciplina;
		cout<<"\n media final "<<(aluno[i].nota1*4.0+aluno[i].nota2*6.0)/10;
		
		cout<<"\n______________________________";
		
	}
	
	
	
	return 0;
}