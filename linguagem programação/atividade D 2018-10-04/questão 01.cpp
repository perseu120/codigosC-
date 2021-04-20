/*01) Escreva a função recursiva somaPares que recebe um vetor de n inteiros e
 retorna a soma destes inteiros que são números pares positivos.
 Por exemplo, para v = {5,-3,-2,2,8,1,7,4},
 somaPares retorna 14.*/

#include <iostream>

using namespace std;

int somapar(int [], int);

int main(){
	int n;
	int soma=0;
	cin>>n;
	int v[n];
	
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	cout<<somapar(v,n);
	
	return 0;
}
int somapar( int vet[], int tam){
	
	if(tam==0){
		return tam;
	}
	else if(vet[tam-1]%2==0){
		return	vet[tam-1]+somapar(vet,tam-1);
	}
	else {
		return somapar(vet, tam-1);
	}
	
}
