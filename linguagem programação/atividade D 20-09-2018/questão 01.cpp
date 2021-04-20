/*Faça um programa que preenche uma matriz 4 x 4
 com o produto do valor da linha e da coluna de cada elemento.
  Em seguida, imprima na tela a matriz*/

#include <iostream>
#include <locale.h>

using namespace std;

setlocale(LC_ALL,"portuguese");

int main(){
	int tam=4, matriz[tam][tam];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			matriz[i][j]=i*j;
			
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
