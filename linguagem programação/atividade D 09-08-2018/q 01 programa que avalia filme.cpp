/*josiamr cruz souza 
data 09/08/2018
programa que avalia o filme */

#include <iostream>
using namespace std;

int main(){
	
	int idade, nota, media=0,media1=0, soma=0;
	float media2=0;
	
	for(int cont=1;cont<=3;cont++){
		cout<<"digite sua idade:";
		cin>>idade;
		cout<<"digite sua nota:\n[1] Regular\n[2] Bom\n[3] Otimo\n";
		cin>>nota;
		
		if(nota==3){
			media++;
			soma=soma+idade;
		}
		if(nota==1){
			media1++;
		}
		if(nota==2){
			media2++;
		}
	}
	
	cout<<"media das pessoas que digitou 3:"<<soma/media<<endl;
	cout<<"pessoas que digitou [1]:"<<media1<<endl;
	cout<<"a porcentagem das pessoas sao:"<<(media2/15)*100<<"%";
		
	
	return 0;
	
}
