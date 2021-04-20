/*josiamr cruz souza 
data 09/08/2018
programa que faz tabuada */

#include <iostream>
using namespace std;

int main(){
	
	int  num;
	char op;
	cout<<"digite o numero";
	cin>>num;
	cout<<"digite qual a operacao desejada, soma, subtracao, divisao ou multiplicacao.";
	cin>>op;
	
	for(int cont=1;cont<11;cont++){
		
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
