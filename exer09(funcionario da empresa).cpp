/*09)Faça um programa que armazene em um registro de dados (estrutura composta)
os dados de um funcionário de uma empresa, compostos de:
Nome, Idade, Sexo (M/F), CPF, Data de Nascimento,
Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário.
Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.*/

#include<iostream>
#include <stdlib.h>

using namespace std;

struct FUNCIONARIO{
	
	string nome;
	int idade;
	char sexo;
	long int cpf;
	int dia;
	int mes;
	int ano;
	
};

struct EMPRESA{
	
	FUNCIONARIO fun;
	int codsetor;
	char cargo[30];
	float salario;

};

int main(){
	
	EMPRESA grande;

		
		cout<<"digite seu nome: ";
		cin>>grande.fun.nome;
		cout<<"\ndigite sua idade: ";
		cin>>grande.fun.idade;
		cout<<"\nsexo [M] ou [F]: ";
		cin>>grande.fun.sexo;
		cout<<"\ndigite seu cpf: ";
		cin>>grande.fun.cpf;
		cout<<"\ndigite data de nascimento\n";
		cout<<"Dia:";
		cin>>grande.fun.dia;
		cout<<"\nMes: ";
		cin>>grande.fun.mes;
		cout<<"\nAno: ";
		cin>>grande.fun.ano;	
		cout<<"\n\nDigite o codigo do setor: ";
		cin>>grande.codsetor;
		cout<<"\ndigite cargo: ";
		cin>>grande.cargo;
		cout<<"\ndigite o salario: ";
		cin>>grande.salario;
		
		cout<<"aperte alguma tecla para mostra o funcionario cadstrado\n\n";
	system("pause");
	system("cls");
	

		
		cout<<"Nome: ";
		cout<<grande.fun.nome;
		cout<<"\nIdade: ";
		cout<<grande.fun.idade;
		cout<<"\nsexo: ";
		cout<<"[ "<<grande.fun.sexo<<" ]";
		cout<<"\nCPF: ";
		cout<<grande.fun.cpf;
		cout<<"\nNascimento: ";
		cout<<grande.fun.dia;
		cout<<"/ ";
		cout<<grande.fun.mes;
		cout<<"/ ";
		cout<<grande.fun.ano;	
		cout<<"\n\nSetor: ";
		cout<<grande.codsetor;
		cout<<"\nCargo: ";
		cout<<grande.cargo;
		cout<<"\nSalario: ";
		cout<<grande.salario;
		
		
		
	
	return 0;
}









