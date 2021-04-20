/*josimar cruz souza
data 13/09/2018
verifica a quantidade e quais os mumero primos de um vetor, verifica a quantidade de numeros par de um vetor e conta quantos tem.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"portuguese");
	int tam=6, cont=0, pao=0;
	int vetor[tam];
	
	for(int i=0;i<6;i++){
		cin>>vetor[i];		
	}
	
	for(int i=0;i<6;i++){
		if(vetor[i]%2==0){
			cont++;
			cout<<vetor[i]<<" é par\n";
			
		}
		else{
			pao++;
			cout<<vetor[i]<<" é impar\n";
			
			
		}
		
	}
	cout<<"quantidade de par é: "<<cont;
	cout<<"\nquantidade de impar é: "<<pao;
	
	return 0;
}
