/*josimar cruz souza
data 15/08/2018
program que calcula a sequencia de fribonacci e o usuario escolhe o ultimo termo*/

#include<iostream>

using namespace std;

int main(){
	
	int num1=0, num2=1, aux, num;
	
	cin>>num;
	cout<<num1;
	
	for(int i=1;i<=num;i++){
		aux=num1+num2;
		
		cout<<aux;
		
		num1=num2;
		num2=aux;
	}
	
		
	return 0;
}
