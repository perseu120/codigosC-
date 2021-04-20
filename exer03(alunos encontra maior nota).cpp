/*
03)	Crie uma estrutura representando os alunos de um determinado curso.
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
a.	Permita ao usuário entrar com os dados de 5 alunos.
b.	Encontre o aluno com maior nota da primeira prova.
c.	Encontre o aluno com maior média geral.
d.	Encontre o aluno com menor média geral
e.	Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/
#include <iostream>
#include <stdlib.h>
#include<string>

using namespace std;


struct ALUNO {
	int matricula;
	string nome;
	float nota1;
	float nota2;
	float nota3;	
};

int main(){
	
	int tam=2, alnota=0, almais=0, almenos=0;
	float maiornota, maiormedia, menormedia;
	
	
	ALUNO aluno[tam];
	
	cout<<"matricula do aluno 1:";
	cin>>aluno[0].matricula;
	cout<<"\nNome do aluno 1:";
	cin.ignore();	
	getline(cin, aluno[0].nome);
	cout<<"\nprimeira nota do aluno 1:";;
	cin>>aluno[0].nota1;
	cout<<"\nsegunda nota do aluno 1:";
	cin>>aluno[0].nota2;
	cout<<"\nterceira nota do aluno 1: ";
	cin>>aluno[0].nota3;
	
	maiornota=aluno[0].nota1;
	maiormedia=(aluno[0].nota1+aluno[0].nota2+aluno[0].nota3)/3;
	menormedia=(aluno[0].nota1+aluno[0].nota2+aluno[0].nota3)/3;
	
	for(int i=1; i<tam; i++){
		cout<<"\nmatricula do aluno "<<i+1<<":";
		cin>>aluno[i].matricula;
		cout<<"\nNome do aluno "<<i+1<<":";
		cin.ignore();	
		getline(cin, aluno[i].nome);
		cout<<"\nprimeira nota do aluno "<<i+1<<":";
		cin>>aluno[i].nota1;
		cout<<"\nsegunda nota do aluno "<<i+1<<":";
		cin>>aluno[i].nota2;
		cout<<"\nterceira nota do aluno "<<i+1<<":";
		cin>>aluno[i].nota3;
		
		if(aluno[i].nota1>maiornota){
			
			maiornota=aluno[i].nota1;
			alnota=i;
		}
		if(	maiormedia<(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3){
			
			maiornota=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
			almais=i;
		}
		if(menormedia>(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3){
			
			menormedia=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;
			almenos=i;
		}
		
		
	}
	system("cls");
	cout<<"\nALUNO QUE TIROU A PRIMEIRA NOTA MAIOR\n";
	
	cout<<aluno[alnota].nome<<endl;
	cout<<maiornota;
	
	cout<<"\nALUNO COM MAIOR MEDIA FINAL\n";
	cout<<aluno[almais].nome<<endl;
	cout<<maiormedia;
	
	cout<<"\nALUNO COM MENOR MEDIA FINAL\n";
	cout<<aluno[almenos].nome<<endl;
	cout<<menormedia;	
	
	
	
	
	
	
	return 0;
}





















