#include <iostream>

using namespace std;

int main( ){
	
	int conta, chave;
	float cred, credf, gasto, limit;


	do{	cout<<"digite o numero de sua conta\n";
		cin>>conta;
	
		cout<<"digite seus creditos iniciais\n";
		cin>>cred;
	
		cout<<"digite o total debitado\n";
		cin>>gasto;
	
		cout<<"digite o total de credito do cliente nesse mes:\n";
		cin>>credf;
	
		cout<<"digite o limite de credito permitido:\n";
		cin>>limit;
		
		
		
		cred=cred+credf;
		
		cout<<"numero da conta"<<conta<<endl;
		cout<<"limite"<<limit<<endl;
		cout<<"seus creditos"<<cred<<endl;
		
		if(limit<cred){
			cout<<"limite excedido";
		}
		
		
		cout<<endl<<"digite -1 para sair e 0 para continuar\n";
		cin>>chave;
		cout<<endl;
	
	} while(chave!=-1);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
