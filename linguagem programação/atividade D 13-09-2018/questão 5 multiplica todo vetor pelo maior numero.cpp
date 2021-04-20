/*josimar cruz souza
data 13/09/2018
multiplicar um vetor pelo maior numero inteiro contido nele*/
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int vetor[15], maior;
	
	for(int i=0;i<15;i++){
		cin>>vetor[i];
	}
	maior=vetor[0];
	for(int i=1;i<15;i++){
		if(vetor[i]>maior){
			maior=vetor[i];
		}
	}
	for(int i=0;i<15;i++){
		cout<<vetor[i]*maior<<endl;
		
	}
	for(int i=0;i<15;i++){
		cout<<"o vetor completo"<<vetor[i]<<endl;
	}
	
	return 0;
}
