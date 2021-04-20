/*questão 02) Escreva um programa que receba dois structs do tipo dma, cada um representando uma data válida,
 e calcule o número de dias que decorreram entre as duas datas.
struct dma {
    int dia;
     int mes;
      int ano;};*/
#include <iostream>
#include <locale.h>

using namespace std;

struct DMA{
	int dia;
	int mes;
	int ano;
	
} x, y;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	cin>>x.dia;
	cin>>x.mes;
	cin>>x.ano;
	
	cin>>y.dia;
	cin>>y.mes;
	cin>>y.ano;
	
	cout<<" a diferença de datas é:"<<y.dia-x.dia<<"dias e "<<y.mes-x.mes<<" meses e"<<y.ano-x.ano<<" ano(s)";
	
	
	sistem("PAUSE");
	return 0;
}
