/*Escreva a fun��o somaDigitos que recebe um n�mero inteiro n e retorna a soma dos seus d�gitos.
 Por exemplo, a soma dos d�gitos de 365 � 14 e de 3651 � 15.*/

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
