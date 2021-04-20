#include<iostream>

using namespace std;

int main(){
	
	int cont=0, tam=5;
	int vet[tam];
	for(int i=0;i<tam;i++){
		
		cin>>vet[i];
		if(vet[i]%2==0){
			cont++;
		}
	}
	
	cout<<"quantidade de pares: "<<cont;
	
	
	return 0;
}