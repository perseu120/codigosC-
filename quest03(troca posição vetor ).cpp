#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;


int main(){
setlocale(LC_ALL,"portuguese");	
	int tam=6, vet[tam], aux, variavel=tam/2;
	
	for(int i=0;i<tam;i++){
		cin>>vet[i];
	}
	
	for(int i=0;i<tam/2;i++){
		
		
		aux=vet[i];
		vet[i]=vet[variavel];
		vet[variavel]=aux;
		
		variavel++;
	}
	
	for(int i=0;i<tam;i++){
		cout<<vet[i];
	}
	return 0;
}
