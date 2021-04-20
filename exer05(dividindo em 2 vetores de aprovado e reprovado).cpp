/*Faça um programa que leia os dados de 10 alunos 
(Nome, matricula, Média Final), armazenando em um vetor.
Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados,
considerando a média mínima para a aprovação como sendo 5.0.
Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.
*/
#include<iostream>

using namespace std;
struct ALUNO{
	
	int matricula;
	string nome;
	int media;	
};

int main(){
	
	int tam=2, contaprovado=0, contreprovado=0;
	ALUNO aluno[tam];
	
	for(int i=0;i<tam;i++){
		cout<<"Matricula aluno: "<<i+1<<": ";
		cin>>aluno[i].matricula;
		cout<<"\nNome aluno: "<<i+1<<": ";
		cin>>aluno[i].nome;
		cout<<"\nMedia aluno: "<<i+1<<": ";
		cin>>aluno[i].media;
		
		if(aluno[i].media>=5)
			contaprovado++;
		else
			contreprovado++;
	}
	
	ALUNO rep[contreprovado], apr[contaprovado];
	
	
	for(int i=0, j=0, k=0;i<tam;i++){
		if(aluno[i].media>=5){
			
			apr[j].matricula= aluno[i].matricula;
			apr[j].nome= aluno[i].nome;
			apr[j].media= aluno[i].media;
			j++;
		}else{
			rep[k].matricula= aluno[i].matricula;
			rep[k].nome= aluno[i].nome;
			rep[k].media= aluno[i].media;
			j++;			
		}
		
	}
		cout<<"\nALUNOS APROVADOS: ";	
	for(int i=0; i<contaprovado; i++){
		
		cout<<"\n\n\nmatricula aluno "<<i+1<<": ";
		cout<<apr[i].matricula;
		cout<<"\nnome aluno "<<i+1<<": ";
		cout<<apr[i].nome;
		cout<<"\nmedia aluno "<<i+1<<": ";
		cout<<apr[i].media;
		   	
	}
	
	cout<<"ALUNOS REPROVADOS: ";	
	for(int i=0; i<contaprovado; i++){
		
		cout<<"\n\n\nmatricula aluno "<<i+1<<": ";
		cout<<rep[i].matricula;
		cout<<"\nnome aluno "<<i+1<<": ";
		cout<<rep[i].nome;
		cout<<"\nmedia aluno "<<i+1<<": ";
		cout<<rep[i].media;
		   	
	}
	
	
	
	
	
	
	
	return 0;
}