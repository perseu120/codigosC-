/*josimar cruz souza
data 13/09/2018
Le um vetor de 10 elementos e em seguida encontra a posi��o do elemento que o usuario escolher*/
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"portuguese");

	int vetor[10], elemento;

	do{	
	for(int i=0; i<10;i++){
		cin>>vetor[i];		
	}
	cin>>elemento;
	
	for(int i=0;i<10;i++){
		if(vetor[i]==elemento){
			cout<<"est� na posi��o"<<i<<endl;
		}
		else if(vetor[i]!=elemento){
			cout<<"\nn�o esta contido";
		}
	}
	
	}while(elemento>=0);
	
	
}
