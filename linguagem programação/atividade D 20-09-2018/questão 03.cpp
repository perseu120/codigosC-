/*03)Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int tam=3, matriz[tam][tam], soma=0;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cin>>matriz[i][j];
		}
	}
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(i<j){
				soma=soma+matriz[i][j];
			}	
		}
	}
	cout<<soma;
	return 0;
}
