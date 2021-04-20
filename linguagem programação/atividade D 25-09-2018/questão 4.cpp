#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int valor, pao=0, tam=3, matriz[tam][tam],vetor[tam], vet[tam], secud=0, soma=0;
	
	for(int i=0;i<tam;i++){ //verificar se o valor é repetido
		for( int j=0;j<tam;){
			cin>>valor;
			if(valor>0&&valor<10){
			
				if(valor==matriz[i][j]){
					pao=1;
				}
				if(pao==0){
					matriz[i][j]=valor;
					j++;
				}
			}else{cin>>valor;}
			
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
			if(i==j){
				soma=soma+matriz[i][j];
			}
		
		}
	}	
	for(int i=0;i<tam;i++){		
		for(int j=0;j<tam;j++){
			if(i+j==tam-1){
				secud=soma+matriz[i][j];
			}
		}
	}
	
	for(int i=0;i<tam;i++){
		if(vetor[i]==vet[i]&&vet[i]==secud&&secud==soma){
			cout<<"É quadrado magico. ";
		}
		cout<<" a"<<vetor[i]<<endl;
		cout<<" b"<<vet[i]<<endl;
		cout<<" c"<<soma<<endl;
		cout<<" d"<<secud<<endl;
		
	}
	
	

	return 0;
}
