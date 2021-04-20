/*04)Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos.
Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d.
Seu programa deverá comparar as respostas de cada candidato com o gabarito e 
emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int tam=3, tam2=3, cont=0, resultado[tam2];
	char matriz[tam][tam2];
	char gabarito[tam2];
	
	for(int i=0;i<tam2;i++){
		cout<<"Digite a alternativa a, b, c ou d. ";
		cin>>gabarito[i];
	}
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam2;j++){
			cin>>matriz[i][j];
		}
	}
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam2;j++){
			if(matriz[i][j]==gabarito[j]){
				cont++;
							
			}	
		}
		resultado[i]=cont;
		cont=0;
	}
	
	for(int i=0;i<tam;i++){
		cout<<resultado[i]<<endl;
	}
	return 0;
}
