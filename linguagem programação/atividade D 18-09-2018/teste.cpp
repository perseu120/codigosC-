/*02) Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor.
 Os dados dever�o ser armazenados no vetor na ordem que forem sendo lidos,
  sendo que caso o usu�rio digite um n�mero que j� foi digitado anteriormente,
   o programa dever� pedir para ele digitar outro n�mero. Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor,
 verificando se ele existe entre os n�meros que j� foram fornecidos. Exibir na tela o vetor final que foi digitado.*/
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
