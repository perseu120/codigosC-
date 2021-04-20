/*josimar cruz souza
data 13/09/2018
programa que ler nume de um produto e o seu preco e com o menu de opções*/

#include <iostream>
#include <locale.h>
#include <cstring>
using namespace std;

int main(){
setlocale(LC_ALL,"portuguese");

int tam=50, cont=0;
char op;
string produto[tam];
float preco[tam], media=0;

for(int i=0;i<5;i++){
	cin>>produto[i];
	cin>>preco[i];
}
cout<<"digite opção: ";
cin>>op;

switch(op){
	
case 'a': 
	for(int i=0;i<5;i++){
		if(preco[i]<50){
			cont++;
		}
		break;
	}
cout<<cont;

case 'b':
	for(int i=0;i<5;i++){
		if(preco[i]<100 && preco[i]>50){
			cout<<produto[i];
			
		}
	}
	break;
case 'c':
	for(int i=0;i<5;i++){
		if(preco[i]>100){
		media=media+preco[i];
		}
	}
	cout<<media/5;
	break;
}



	return 0;
}
