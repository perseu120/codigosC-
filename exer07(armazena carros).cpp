/*07)Fa�a um programa que leia um vetor com os dados de 5 carros:
marca (m�ximo 15 letras), ano e pre�o.
Leia um valor p e mostre as informa��es de todos os carros com pre�o menor que p.
Repita este processo at� que seja lido um valor p = 0.*/
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
		cout<<"\ndigite o pre�o do carro "<<i+1<<": ";
		cin>>carro[i].preco;
		
	}
	
	cout<<"\ndigite o pre�o maximo do carro desejado:";
	cin>>p;
	
	while(p!=0){
		
		for(int j=0;j<tam;j++){
			
			if(carro[j].preco<p){
				cout<<"carro ";
				cout<<carro[j].marca;
				cout<<"\nano ";
				cout<<carro[j].ano;
				cout<<"\npre�o ";
				cout<<carro[j].preco;
				
			}
			
			
		}
		
		
		
		
		
		cout<<"\ndigite o pre�o maximo do carro desejado:";
		cin>>p;
	}
	
	
	return 0;
}









