/*08)Faça um programa que leia um vetor com dados de 5 livros:
título (máximo 30 letras), autor (máximo 15 letras) e ano.
Procure um livro por título, perguntando ao usuário qual título deseja buscar.
Mostre os dados de todos os livros encontrados.*/
#include<iostream>
#include <stdlib.h>

#define t 30
#define u 15

using namespace std;

struct LIVRO{
	char titulo[t];
	char autor[u];
	int ano;

};

int main(){
	int tam=5, Q;
	int p;
	LIVRO livro[tam];
	char aux[t], auxautor[u];
	
	
	for(int i=0; i<tam;i++){
		cout<<"digite titulo do livro "<<i+1<<": ";
		cin>>livro[i].titulo;
		cout<<"\ndigite autor do livro "<<i+1<<": ";
		cin>>livro[i].autor;
		cout<<"\ndigite o ano do livro "<<i+1<<": ";
		cin>>livro[i].ano;
		
	}
	
	system("cls");
	
	cout<<"\ndigite por qual titulo deseja buscar:";
	cout<<"\n1 - nome do livro\n2 - autor\n3 - ano do livro";
	cin>>p;
	switch(p){
		
		case 1:{
			cout<<"digite o nome do livro ";
			cin>>aux;
			for(int i=0;i<tam;i++){
				
				if(aux == livro[i].titulo){
					
					cout<<"titulo do livro "<<i+1<<": ";
					cout<<livro[i].titulo;
					cout<<"\nautor do livro "<<i+1<<": ";
					cout<<livro[i].autor;
					cout<<"\nano do livro "<<i+1<<": ";
					cout<<livro[i].ano;
					
					
					
				}
				
				
			}
			
			
		}
		case 2:{
			cout<<"digite o nome do autor do livro ";
			cin>>auxautor;
			for(int i=0;i<tam;i++){
				
				if(auxautor == livro[i].autor  ){
					
					cout<<"titulo do livro "<<i+1<<": ";
					cout<<livro[i].titulo;
					cout<<"\nautor do livro "<<i+1<<": ";
					cout<<livro[i].autor;
					cout<<"\nano do livro "<<i+1<<": ";
					cout<<livro[i].ano;
					
					
					
				}
				
				
			}
			
			
			
		}
		case 3:{
			cout<<"digite o ano do livro ";
			cin>>Q;
			
			for(int i=0;i<tam;i++){
				
				if(Q == livro[i].ano){
					
					cout<<"titulo do livro "<<i+1<<": ";
					cout<<livro[i].titulo;
					cout<<"\nautor do livro "<<i+1<<": ";
					cout<<livro[i].autor;
					cout<<"\nano do livro "<<i+1<<": ";
					cout<<livro[i].ano;
					
					
					
				}
				
				
			}
			
			
		}
		
		
	}
	
	
	
	return 0;
}









