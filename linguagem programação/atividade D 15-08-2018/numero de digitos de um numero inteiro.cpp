/*josimar cruz souza
data 15/08/2018
program que mostra o tanto de digitos de um numero inteiro*/

#include<iostream>

using namespace std;

int main(){
	
	int num, chave=1;
	
	cout<<"digite um numero interio: ";
	cin>>num;
	
	if(num<0){
		cout<<"numero invalido";
		
	}
		
	while(num>=10){
		num=num/10;
		chave++;
			
		}
		
		cout<<"a quantidade de digitos e"<<chave;
		
		
	return 0;
}
