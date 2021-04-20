/*Escreva a função somaDigitos que recebe um número inteiro n e retorna a soma dos seus dígitos.
 Por exemplo, a soma dos dígitos de 365 é 14 e de 3651 é 15.*/

#include <iostream>

using namespace std;

int somad (int);

int main(){
	int n;
	cin>>n;
	
	cout<<somad(n);
	
	return 0;
}
int somad(int a){
	
	if(a%10<=0){
		return 0;
	}else{
		return a%10+somad(a/10);
		
	}
	
	
}
