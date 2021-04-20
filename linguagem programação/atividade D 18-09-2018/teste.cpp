/*02) Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
 Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
  sendo que caso o usuário digite um número que já foi digitado anteriormente,
   o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
 verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado.*/
 #include <iostream>
 #include <locale.h>
 using namespace std;
 
 int main(){
 	setlocale(LC_ALL,"portuguese");
 	
 	int tam=10, vet[tam], ia=0, ok=0, aux;
 	
 	cin>>aux;

 	for(int i=0;i<=ia;i++){
 			
	 	if(vet[i]==aux){
	 		ok=1;
	 		while(aux==vet[i]){
	 			cin>>aux;
			 }
	 	}
 
 		if(ok==0){
 			vet[ia]=aux;
 			ia++;
 			ok=0;
 		}
 	}	
 
 	return 0;
 }
