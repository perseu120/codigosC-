/*questão 03) Crie uma estrutura representando os alunos de um determinado curso. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
(a)  Permita ao usuário entrar com os dados de 5 alunos.
(b)  Encontre o aluno com maior nota da primeira prova.
(c)  Encontre o aluno com maior média geral.
(d)  Encontre o aluno com menor média geral
(e)  Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/
#include <iostream>

using namespace std;

struct aluno{//declaração da struct
	int mat;
	char nome[80];
	float nota;
	float nota2;
	float nota3;
	
};

int main(){
	const int t=5;
	int maiorm=0, menorm=0, maiornota1=0;
	aluno v[t];//vetro para armazenar as estruturas
	
	for(int i=0;i<t;i++){//estrutura de repetição para poder ir pulando de uma struct para outra
		
		cin>>v[i].mat; //receber o numero de matricular
		cin>>v[i].nome;//receber nome do aluno
		cin>>v[i].nota;//receber a nota 1
		cin>>v[i].nota2;//receber a nota 2
		cin>>v[i].nota3;//receber a nota 3
		
	}
	//Encontre o aluno com maior média geral.

	for(int i=1;i<t;i++){
		
		if((v[i].nota>v[maiornota1].nota )){
			
			maiornota1=i;
		}
		if((v[i].nota+v[i].nota2+v[i].nota3)/3 >(v[maiorm].nota+v[maiorm].nota2+v[maiorm].nota3)/3){
			
			maiorm=i;
		}
		if((v[i].nota+v[i].nota2+v[i].nota3)/3 < (v[menorm].nota+v[menorm].nota2+v[menorm].nota3)/3){
			
			menorm=i;
		}
		
		
		
			
	}
	cout<<"O aluno que tirou maior nota na primeira prova foi o aluno: "<<maiornota1+1<<endl;
	cout<<"O aluno que tirou maior media foi o aluno: "<<maiorm+1<<endl;
	cout<<"O aluno que tirou menor media foi o aluno: "<<menorm+1;
	
	
	
	
	return 0;
}
