#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int tamanho=12, posicao1, posicao2;
	int vetor[tamanho];
	
	for(int i=0;i<tamanho;i++){
		cin>>vetor[i];
	}
	printf("posicao somada");
	scanf("%d", &posicao1);
	scanf("%d", &posicao2);
//	cin>>posicao1>>posicao2;
	
	cout<<"valor da soma "<<vetor[posicao1]+vetor[posicao2];
	
	
	
	return 0;
}
