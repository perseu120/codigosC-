#include <iostream>

using namespace std;

int main(){
	int cont=0, t=40, contpar=0;
	int odin[t];
	
	
	while(cont<5){//prencher e verifica se é par
		cin>>odin[cont];
		if(odin[cont]%2==0){
			contpar++;	
		}
		
		cont++;
		
	}
	
	cout<<"Quantidade de par: "<<contpar;
	return 0;
}
