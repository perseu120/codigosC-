/*josimar cruz souza
data:24/07/2018
programa que que ler um valor inteiro e mostre na tela uma sequencia incluindo os dois n�meros que vem antes, o n�mero digitado,
 e os dois n�meros que vem depois dele*/
 
#include <iostream>
#include <locale.h>

using namespace std;

int main( ){
	
setlocale (LC_ALL,"portuguese");

int n;

cout<<"digite um numero inteiro qualque:r";
cin>>n;

cout<<"os seus 2 antecessor e os seus 2 sucessor s�o:"<<n-2 <<n-1 <<n <<n+1 <<n+2 ;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
