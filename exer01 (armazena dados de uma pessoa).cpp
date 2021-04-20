/*01)	Implemente um programa que leia o nome,
a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.*/

#include <iostream>
#include <stdio.h>

using namespace std;

struct PESSOA {
	string nome;
	int idade;
	string rua;
	int numero;
		
}a;
void imprime(PESSOA b){
	
cout<<a.nome<<endl;

cout<<a.idade<<endl;

cout<<a.rua<<endl;

cout<<a.numero<<endl;
	
};

int main(){
	
	cout<<"Digite os dados deu da pessoa\n Nome: ";
	cin>>a.nome;
	cout<<"Digite idade";
	cin>>a.idade;
	cout<<"\nDigite rua";
	cin>>a.rua;
	cout<<"Digite numero";
	cin>>a.numero;
	
	
	imprime(a);
	
	
	return 0;
}
