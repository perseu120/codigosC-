/*
	Autor:Wesley Santos Costa
	Data: 09/08/2018
	Programa que
*/
#include<iostream>
#include<locale>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int idade,idadet,op,cont=0,cont1=0,cont2=0;
	int f=3;
	
	cout<<"Enquete do filme-Logan.\nDigite [1] para avaliar como REGULAR;\nDigite [2] para avaliar como BOM;\nDigite [3] para avaliar como �timo.\n";
	
	for(int i=1;i<=f;i++){
		cout<<"Digite sua idade:\n";
		cin>>idade;
		cout<<"Digite sua opniao sobre o filme:\n";
		cin>>idadet;
		
		if(op==3){
			cont=cont+1;
			idadet+=idade;
		}else if(op==2){
			cont1=cont1+1;
		}else if(op==1){
			cont2=cont2+1;
		}
	}
//	cout<<"A media de idade das pessoas que escolheram a op��o 3 foi de "<<idadet/cont<<" anos.\n";
	cout<<"A quantidade de pessoas que escolheram a op��o 2 foi de "<<cont1<<" pessoas.\n";
	cout<<"A porcentagem de pessoas em rela��o ao total de entrevistados que escolheu a op�ao 1 � de "<<(cont2/f)*100<<"%.\n";
	
	
	return 0;
}
