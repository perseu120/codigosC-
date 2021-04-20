#include<iostream>

using namespace std;

int main(){
	
	int tam=5;
	int vet[tam];
	
	for(int i=0;i<tam;i++){
		
		cin>>vet[i];
		if(vet[i]<0){
			vet[i]=0;
		}
	}
	
	for(int i=0;i<tam;i++){
		cout<<vet[i]<<endl;
	}
	
	return 0;
}