/*questão 05)Faça um programa que leia os dados de 10 alunos (Nome, matricula, Média Final),
armazenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados,
considerando a média minima para a aprovação como sendo 5.0.
Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.*/
#include <iostream>

using namespace std;

struct ALUNO{//struct para receber os dados dos alunos
	string nome;
	int matricula;
	float mediaf;	
};

int main(){
	
	const int t=3;//tamanho do vetor que corresponde a tamanho dos alunos
	ALUNO vet[t];//vetor que recebe os alunos
	ALUNO aprov[t];//vetor que recebe alunos aprovados
	ALUNO repro[t];//vetor que recebe os alunos reprovados
	
	int h=0, q=0, b=0, p=0;//variavel para tamanho do vetor d aprovado e reprovado e para posição de onde vai receber o aluno aprovado e reprovado
	for(int i=0;i<t;i++){//estrutura para receber os daddos de todas as struct
		cout<<"Nome:";
		cin>>vet[i].nome;
		cout<<"\nMatricula:";
		cin>>vet[i].matricula;
		cout<<"\nMedia final:";
		cin>>vet[i].mediaf;
			
		
	}
	for(int i=0;i<t;i++){//estrutura para coloca os dados dos aprovados
		
		if(vet[i].mediaf>=5.0){
			aprov[p]=vet[i];
			p++;
			h++;
		}
	}
	
	
	
	
	for(int i=0;i<t;i++){//estrutura para coloca os dados dos reprovados
		
		if(vet[i].mediaf<5.0){
			repro[b]=vet[i];
			b++;
			q++;
		}
	}

	
	cout<<"Aprovados:\n";
	
	for(int i=0;i<h;i++){//impressão dos dados dos aprovados
		cout<<aprov[i].nome<<endl;	
		cout<<aprov[i].matricula<<endl;
		cout<<aprov[i].mediaf<<endl<<endl;	
	}
	cout<<"Reprovado:\n";
	
	for(int i=0;i<q;i++){//impressão dos dados dos reprovados
		cout<<repro[i].nome<<endl;	
		cout<<repro[i].matricula<<endl;
		cout<<repro[i].mediaf<<endl<<endl;
	}
	
	return 0;
}