/*02)Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:

A[i][j] = 2i + 7j - 2 se i < j;

A[i][j]=3i2 -1 se i=j;

A[i][j]=4i3 -5j2 +1 se i>j.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int tam=10, matriz[tam][tam];
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(i<j){
				matriz[i][j]=(2*i+7*j)-2;
			}
			if(i==j){
				matriz[i][j]=3*i*2-1;
			}
			if(i>j){
				(4*i*3)-(5*j*2)+1;
			}
			cout<<matriz[i][j]<<"\t\t";
		}
		cout<<endl<<endl;
	}
	return 0;
}
