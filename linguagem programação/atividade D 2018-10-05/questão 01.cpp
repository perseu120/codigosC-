/*01)Escreva, em C++, as funções recursivas que unem duas listas (arrays) classificadas (MERGE) considerando que:

a) As duas listas não têm elementos em comum
b) As duas listas tem elementos comuns, mas a resultante pode ter repetição
c) As duas listas tem elementos comuns, mas a resultante não pode ter repetição*/
#include <iostream>
using namespace std;

void uni([], int,[],int,[],int);

int main(){
	int tam=3, ful;
	ful=tam+tam;//somando tamnanho do vetor que vai recever a função
	int vet[tam]{1,2,3};//atribuindo valores aos vetores
	int veto[tam]{4,3,5};
	int vt[ful];
	
	uni(vet,tam,veto,tam,vt,ful); //chamada da função
	
	
	
	return 0;
}
void uni (int v[], int t,vi[],int ti,int vii[],int tii){
	if(t==0){
		vii[0]=v[0]; //quando o tamanho for 0 ele receber o valor das posição 0 dos vetores
		vii[ti]=vi[0];
	}
	else{
		vii[t-1]=v[t-1];
		vii[t-1]=vi[t-1]
		uni(v[],t-1,vi[],ti-1,vii[],tii-1);// caso recursivo onde vai percorrendo o vetor
	}
	
	
}
