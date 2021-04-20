/*josiamr cruz souza 
data 09/08/2018
programa que faz tabuada com usuario dizendo inicio e fim */

#include <iostream>
using namespace std;

int main(){
	
	int  num, inicio, fim;
	char op;
	cout<<"digite o numero";
	cin>>num;
	cout<<"digite qual a operacao desejada, soma, subtracao, divisao ou multiplicacao.";
	cin>>op;
	cout<<"digite onde a tabuada inicia";
	cin>>inicio;
	cout<<"digite onde a tabuada termina";
	cin>>fim;
	
	for(int cont=inicio;cont<=fim;cont++){
		
		if(op=='+'){
		cout<<num<<"+"<<cont<<"="<<num+cont<<endl;
		}
		
		else if(op=='-'){
			cout<<num<<"-"<<cont<<"="<<num-cont<<endl;
		}
		
		else if(op=='*'){
			cout<<num<<"*"<<cont<<"="<<num*cont<<endl;
		}
		
		else if(op=='/'){
			cout<<num<<"/"<<cont<<"="<<num/cont<<endl;
		}
		
	}
	
	
	
	
	return 0;
	
}
