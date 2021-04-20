/*07)Faça um programa que leia um vetor com os dados de 5 carros:
marca (máximo 15 letras), ano e preço.
Leia um valor p e mostre as informações de todos os carros com preço menor que p.
Repita este processo até que seja lido um valor p = 0.*/
#include<iostream>
#include <stdlib.h>

#define t 15
using namespace std;

struct CARRO{
	char marca[t];
	int ano;
	float preco;

};

int main(){
	int tam=5;
	float p;
	CARRO carro[tam];
	
	for(int i=0; i<tam;i++){
		cout<<"digite a marca do carro "<<i+1<<": ";
		cin>>carro[i].marca;
		cout<<"\ndigite o ano do carro "<<i+1<<": ";
		cin>>carro[i].ano;
		cout<<"\ndigite o preço do carro "<<i+1<<": ";
		cin>>carro[i].preco;
		
	}
	
	cout<<"\ndigite o preço maximo do carro desejado:";
	cin>>p;
	
	while(p!=0){
		
		for(int j=0;j<tam;j++){
			
			if(carro[j].preco<p){
				cout<<"carro ";
				cout<<carro[j].marca;
				cout<<"\nano ";
				cout<<carro[j].ano;
				cout<<"\npreço ";
				cout<<carro[j].preco;
				
			}
			
			
		}
		
		
		
		
		
		cout<<"\ndigite o preço maximo do carro desejado:";
		cin>>p;
	}
	
	
	return 0;
}









