#include <stdlib.h>
#include <iostream>

using namespace std;

const int t =3;

void funcao (int matriz[t][t]);

int main (){
	
	
	int matriz[t][t];
	
	for(int i = 0; i<t ; i++){
		for(int j = 0; j<t; j++){
			
			matriz[i][j] = i - j +5;
		}
		
	}
	
	for(int i = 0; i<t ; i++){
		for(int j = 0; j<t; j++){
			
			cout<< matriz[i][j];
		}
		cout<<endl;	
	}
	
	
	funcao( matriz);
	
	
	return 0;
}

void funcao (int matriz[t][t]){
	
	int maior = matriz[0][0], menor = matriz[0][0], maiorx, maiory, menorx, menory;
	
	for(int i = 0; i<t ; i++){
		for(int j = 0; j<t; j++){
			
			if(maior < matriz[i][j]){
				
				maior = matriz[i][j];
				maiorx=i;
				maiory=j;
			}
			if(menor > matriz[i][j]){
				
				menor = matriz[i][j];
				menorx=i;
				menory=j;
			}
		}
		
	}
	
	cout<<"\no maior numero "<< maior <<" a posisao do maior  "<< maiorx<< ", "<<maiory<<endl;
	cout<<"o menor numero "<< menor <<" a posisao do menor  "<< menorx<< ", "<<menory;
	
}
