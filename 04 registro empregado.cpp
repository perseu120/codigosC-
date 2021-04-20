/*
04) (Valor 1,5) Defina um registro empregado para guardar os dados 
(nome, sobrenome, data de nascimento, RG, data de admissão, salário)
de um empregado de sua empresa.
Defina um vetor de empregados para armazenar todos os empregados de sua empresa.


*/
#include<iostream>

using namespace std;

struct reg{//declaração das variavel da struct ate a linha 19
	string nome;
	string sobrenome;
	int nas;
	long long int RG;
	int admi;
	float sal;
		
};
int main(){
	
	int t=2;
	reg v[t];//declarando o vetor do tipo struct
	
	for(int i=0;i<t;i++){//recebendo toda a struct
		
	cin>>v[i].nome;
	cin>>v[i].sobrenome;
	cin>>v[i].nas;
	cin>>v[i].RG;
	cin>>v[i].admi;
	cin>>v[i].sal;
			
	}
	
	for(int i=0;i<t;i++){//mostrando o que tem dentro da struct
		
	cout<<v[i].nome;
	cout<<v[i].sobrenome;
	cout<<v[i].nas;
	cout<<v[i].RG;
	cout<<v[i].admi;
	cout<<v[i].sal;
			
	}
	
	
	
	return 0;
}