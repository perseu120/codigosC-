#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int tam=3, matriz[tam][tam], vetor[tam], vet[tam], soma=0;
	
	for(int i=0;i<tam;i++){
		for( int j=0;j<tam;j++){
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0;i<tam;i++){
		soma=0;
		for( int j=0;j<tam;j++){
			soma=soma+matriz[i][j];
			
			vetor[i]=soma;
		}
	}
	for(int j=0;j<tam;j++){
		soma=0;
		for( int i=0;i<tam;i++){
			soma=soma+matriz[i][j];
			
			vet[j]=soma;
		}
	}
	
	for(int i=0;i<tam;i++){
		for( int j=0;j<tam;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
				
	}
	for(int i=0;i<tam;i++){
		cout<<"soma das linhas: "<<vetor[i]<<endl;
	}
		for(int i=0;i<tam;i++){
		cout<<"\nsoma das colunas: "<<vet[i];
	}
	return 0;
}
