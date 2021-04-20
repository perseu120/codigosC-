#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

using namespace std;
const int t = 50;

struct FILMES {
	
	char nome[t];
	char genero[t];
	int ano;
	float avaliacao;
	
	
};

void funcao (FILMES filmes[], int tam);

int main(){

setlocale (LC_ALL,"portuguese");
	
	
	int tam= 2;
	FILMES filme[tam];
	
	filme[0].ano = 2000; 
	filme[0].avaliacao = 10.5;
	cout<<"genero do filme";
	cin>>filme[0].genero;
	cout<<"\nnome do filme\n";
	cin>>filme[0].nome;
	
	filme[1].ano = 2016;
	filme[1].avaliacao = 10.5;
	cout<<"\ngenero do filme";
	cin>>filme[1].genero;
	cout<<"\nnome do filme\n";
	cin>>filme[1].nome;
	
	
	funcao(filme, tam);

	return 0;

}

void funcao (FILMES filme[], int tam){
		
		for(int i = 0; i < tam ; i++){
			
			if( stricmp( filme[i].genero, "aventura" ) == 0){
		
				if(filme[i].ano >= 2000 && filme[i].ano <= 2010 ){
					 
					 cout<< filme[i].nome;
				}
			
			}	
			
		}
		
		
			
}
