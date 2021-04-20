#include <iostream>
#include <locale.h>

using namespace std;

void linha( );
void coluna( );

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int m, n, matriz[m][n];
	
	cin>>m>>n;
	
	for(int i=0;i<m;i++){
		for( int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	
	cout<<linha(matriz[i][j]);
	cout<<coluna(matriz[i][j]);
	return 0;
}

void linha (g[]int a [] int b){
	int vetor[a];
	for(int i=0;i<a;i++){
		soma=0;
		for( int j=0;j<b;j++){
			soma=soma+matriz[i][j];
			
			vetor[i]=soma;
		}
	}	
	
}

void coluna(g[]int a [] int b ){

	int vet[b];
	
	for(int j=0;j<b;j++){
		soma=0;
		for( int i=0;i<a;i++){
			soma=soma+matriz[i][j];
			
			vet[j]=soma;
		}
	}

}
