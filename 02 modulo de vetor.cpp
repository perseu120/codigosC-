/*
02) (Valor 1,0) A norma ou m�dulo de um vetor � o comprimento desse vetor,
que pode ser calculado por meio da dist�ncia de seu ponto final (b) at� a origem (a).
Conforme f�rmula abaixo,
na computa��o o m�dulo ao inv�s de ser calculado utilizando os valores de a e b,
deve-se utilizar os valores de cada elemento do vetor.

Escreva uma fun��o que tem como par�metro um ponteiro e o tamanho do vetor n,
recebe um vetor de reais v com n elementos e devolve o seu m�dulo via return.
*/
#include<iostream>
#include<cmath>

using namespace std;

float modulo(float *ptrs, int t);//prototipo da fun��o

int main(){
	float mod=0;//variavel que vai recever o modolu das posi��es do vetor
	float *ptrs;//ponteiro que vou passsa por parametro
	int t;//inteiro tamanho do vetor
	cin>>t;
	
	ptrs=&mod;//passando o endere�o da memoria de mod
	
cout<<modulo(ptrs,t);//chamada da fun��o
	
	
	
	return 0;
}
float modulo(float *ptr, int t){
	
	float v[t];
	float a;
	
	for(int i=0;i<t;i++){//atribuindo valores ao vetor
		v[i]=i;
	}
	for(int j=0;j<t;j++){
		
		*ptr= *ptr+(v[j]*v[j]);// calculando o soma das posi�oes do vetor
			
	}
	a=sqrt(*ptr);//tirando a raiz quadrada das somas
	return a;
}