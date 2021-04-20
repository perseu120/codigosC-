#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale (LC_ALL,"portuguese");
	
	int hora;
	int minuto;
	int segundo;
	int conversao;
	int resto;


	cin>>hora;
	cin>>minuto;
	cin>>segundo;


	conversao = hora * 60;
	conversao = conversao + minuto;
	conversao = (conversao * 60) + segundo;
	
	segundo = conversao % 100;
	conversao = conversao / 100;
	
	minuto = conversao % 100;
	
	conversao = conversao / 100;
	
	hora = conversao;
	
	
	cout<<"horas "<<hora;
	cout<<" minutos "<<minuto;
	cout<<" segundo "<<segundo;


	return 0;

}
