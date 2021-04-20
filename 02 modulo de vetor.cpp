/*
02) (Valor 1,0) A norma ou módulo de um vetor é o comprimento desse vetor,
que pode ser calculado por meio da distância de seu ponto final (b) até a origem (a).
Conforme fórmula abaixo,
na computação o módulo ao invés de ser calculado utilizando os valores de a e b,
deve-se utilizar os valores de cada elemento do vetor.

Escreva uma função que tem como parâmetro um ponteiro e o tamanho do vetor n,
recebe um vetor de reais v com n elementos e devolve o seu módulo via return.
*/
#include<iostream>
#include<cmath>

using namespace std;

float modulo(float *ptrs, int t);//prototipo da função

int main(){
	float mod=0;//variavel que vai recever o modolu das posições do vetor
	float *ptrs;//ponteiro que vou passsa por parametro
	int t;//inteiro tamanho do vetor
	cin>>t;
	
	ptrs=&mod;//passando o endereço da memoria de mod
	
cout<<modulo(ptrs,t);//chamada da função
	
	
	
	return 0;
}
float modulo(float *ptr, int t){
	
	float v[t];
	float a;
	
	for(int i=0;i<t;i++){//atribuindo valores ao vetor
		v[i]=i;
	}
	for(int j=0;j<t;j++){
		
		*ptr= *ptr+(v[j]*v[j]);// calculando o soma das posiçoes do vetor
			
	}
	a=sqrt(*ptr);//tirando a raiz quadrada das somas
	return a;
}