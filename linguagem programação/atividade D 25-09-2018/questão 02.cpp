#include <iostream>
#include <locale.h>

using namespace std;

void funcao(int);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x;
	
	cin>>x;	
	
	funcao(x);
	
	return 0;
}
void funcao(int a){
	
	int tam=15, vetor[tam];
	
	for(int i=0;i<tam;i++){
		cin>>vetor[i];
	}
	for(int i=0;i<tam;i++){
		if(vetor[i]==a){
			cout<<"Posição: "<<i<<endl;
		}
	}
	
}
