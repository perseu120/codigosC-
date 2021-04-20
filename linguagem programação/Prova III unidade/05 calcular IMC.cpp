/*(Valor 2,0)Crie uma struct Pessoa: peso, altura e idade.
Crie uma função que receba esses dados (setPessoa) e retorne uma struct P.
Lembre-se: como uma struct define um tipo de dado,
este tipo pode ser retornado em uma função, da mesma forma que ocorre com qualquer outro tipo de dado.
Faça um procedimento imprimePessoa que recebe uma struct,
calcule o IMC e imprima todos os dados.*/
#include <iostream>
#include <iomanip>

using namespace std;

struct PESSOA{
	float peso;//declarando a variavel que vai receber o peso
	float h;//declarando a variavel que vai receber a altura
	int idade;// declarando a variavel que vai receber a idadae
};

PESSOA setpessoa( PESSOA p);//prototipo da função
void imprimepessoa( PESSOA g);//prototipo da outra função

int main(){
	PESSOA y, x;
	
	x=setpessoa(y);//chamada da função
	imprimepessoa(x);//chamada da função
	
	return 0;
}
PESSOA setpessoa( PESSOA p){//recebendo as variveis da struct

	cin>>p.peso;
	cin>>p.h;
	cin>>p.idade;
	
	return p;
}
void imprimepessoa(PESSOA g){//funão para pegar e calcular o IMC
	float imc;
	
	cout<<g.peso<<endl;
	cout<<g.h<<endl;
	cout<<g.idade<<endl<<endl;
	imc = g.peso/(g.h*g.h);
	cout<<setprecision(3)<<imc;
}