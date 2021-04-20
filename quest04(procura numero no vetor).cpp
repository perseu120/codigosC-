#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;


int main(){
setlocale(LC_ALL,"portuguese");	
	int tam=5, vet[tam], x, a=0;
	
	for(int i=0;i<tam;i++){
		
		cin>>vet[i];
	}
	
	cout<<"numero para proucura\n";
	cin>>x;
	for(int i=0;i<tam;i++){
		
		if(vet[i]==x){
			cout<<"posição "<<i;
			a=1;
		}

		
	}
	if(a==0){
		cout<<"não encontrado ";
	}	
	
	return 0;
}
