/*josimar cruz souza
data: 24/07/2018
programa que calcula o tempo (em anos) que uma pessoa ir� demorar para poupar R$ 1.000.000,00 (Um Milh�o de Reais).*/

#include <iostream>
#include <locale.h>

using namespace std;

int main( ){

setlocale(LC_ALL, "portuguese");

float red_men,agua,luz,alimenta,aluguel,sobra,tempo;
	
cout<<"digite sua renda mensal:";
cin>>red_men;

cout<<"digite quanto gasta coom agua:";
cin>>agua;

cout<<"digite quanto gasta com luz:";
cin>>luz;

cout<<"digite quanto gasta com alimenta��o:";
cin>>alimenta;

cout<<"digite quanto gasta com aluguel:";
cin>>aluguel;

cout<<"tua renda mensal �:"<<sobra;

sobra=(red_men-agua-luz-alimenta-aluguel);

tempo=1,000,000,00/sobra;

cout<<"\nvoc� jutnara 1.000.000,00 em"<<tempo/12<<"anos";


return 0


}
