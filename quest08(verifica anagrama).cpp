#include<iostream>

using namespace std;

int main(){
	int tam=5, muda=0;
	
	char vet1[tam];
	char  vet2[tam];
	char ordena[tam];

	cin>>vet1>>vet2;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			
			if(vet1[i]==vet2[j]){
				ordena[i]=vet2[j];						
			}	
		}
		
	}

	for(int i=0;i<tam;i++){
		if(ordena[i]!=vet1[i]){
		   	muda=1;
		}
	
	}
	
	if(muda==0){
		cout<<"anagrama";
	}else{
		cout<<"nao anagrama";
	}
	
	
	return 0;
}