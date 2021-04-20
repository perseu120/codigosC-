/*questão 01) Faça um programa que armazene em um registro de dados (estrutura composta)
 os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, 
 Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres)
  e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.
  */
#include <iostream>
#include <cstring>
using namespace std;

struct FUN{
	char nome[100];
	int idade;
	char sexo;
	long long int cpf;
	int dataN;
	int cod;
	double salario;
	string funcao;
	
}x;

int main(){
	cout<<"nome: ";
	cin>>x.nome;
	cout<<"\nidade: ";
	cin>>x.idade;
	cout<<"\nsexo: ";	
	cin>>x.sexo;
	cout<<"\nCPF: ";
	cin>>x.cpf;
	cout<<"\nData de nascimento ";
	cin>>x.dataN;
	cout<<"\ncod entre 0 e 99: ";
	cin>>x.cod;
	while(x.cod>99||x.cod<0){
	cin>>x.cod;
	}
	cout<<"\nSalario: ";
	cin>>x.salario;
	cout<<"\nFuncao: ";
	cin>>x.funcao;	
	
	cout<<"\n\n*LISTA*\n";
	cout<<"nome: "<<x.nome;
	cout<<"\nidade: "<<x.idade;
	cout<<"\nsexo: "<<x.sexo;
	cout<<"\nCPF: "<<x.cpf;
	cout<<"\nData de nascimento: "<<x.dataN;
	cout<<"\ncod: "<<x.cod;
	cout<<"\nSalario: "<<x.salario;
	cout<<"\nFuncao: "<<x.funcao<<endl;
	
	system("PAUSE");
	return 0;
}
