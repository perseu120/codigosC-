#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int tam=10, cont=1;
	int vetor[tam];
	
	for(int i=0;i<tam;){
		
		if(cont%2==1){
			vetor[i]=cont;
			i++;
		}
		cont++;
		
	}
	for(int i=0;i<tam;i++){
		cout<<vetor[i]<<" ";		
	}
	
	
	
	
	return 0;
}
