#include <iostream>

using namespace std;

int main( ){
	
	float venda, salario=200, op;
	
	
	while(op!=-1){
	cout<<"digite o valor das vendas:";
	cin>>venda;
	cout<<"seu salario:"<<salario+(venda*9)/100<<endl;
	cout<<"digite -1 para sair e 0 para continuar";
	cin>>op;
	}
	
	return 0;
}
