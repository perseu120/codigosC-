/*josimar cruz souza
data 13/09/2018
programa que ler uma string e troca a letra que o usuario escolher*/

#include <iostream>
#include <locale.h>
#include <cstring>
using namespace std;

int main(){

setlocale(LC_ALL,"portuguese");

	string vetor;
	char l1, l2;
	
	cin>>vetor;
	cin>>l1;
	cin>>l2;
	
	for(int i=0;i<50;i++){
		if(vetor[i]==l1){
			vetor[i]=l2;
		}
		
	}
	cout<<vetor;
	
		
	
	return 0;
}
