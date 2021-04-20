/* nome: josiamr cruz souza
data:24/07/2018
programa que calcula area de uma casa com 4 comodos*/

#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"portuguese");
	int bs1,bs2,bs3,bs4,h1,h2,h3,h4,htotal;
	
	cout<< "vamos calcular a area de uma casa com 4 comodos" "\nentão, vamos lá!";
	cout<< "\nagora digite o comprimento do primeiro comodo:";
	cin>>bs1;
	cout<< "\nagora digite a largura do primeiro comodo:";
	cin>>h1;
	cout<<"a area do primeiro comodo é:" <<bs1*h1;
	
	cout<< "\nagora digite o comprimento do segundo comodo:";
	cin>>bs2;
	cout<< "\nagora digite a largura do segundo comodo:";
	cin>>h2;
	cout<<"a area do segundo comodo é:" <<bs2*h2;
	
	cout<< "\nagora digite o comprimento do terceiro comodo:";
	cin>>bs3;
	cout<< "\nagora digite a largura do terceiro comodo:";
	cin>>h3;
	cout<<"a area do terceiro comodo é:" <<bs3*h3;
	
	cout<< "\nagora digite o comprimento do quarto comodo:";
	cin>>bs4;
	cout<< "\nagora digite a largura do quarto comodo:";
	cin>>h4;
	cout<<"a area do quarto comodo é:" <<bs4*h4;	
	cout<< "\notimo agora que temos a area de cada comodo\n a area total da casa é:" <<(bs1*h1)+(bs2*h2)+(bs3*h3)+(bs4*h4);
	
}
