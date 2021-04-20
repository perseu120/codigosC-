/*questão 3.44*/
#include <iostream>

using namespace std;

void fatorial(int);//prototipo da função
int fat(int x);
	
	
int main(){
	
	int i;
	cin>>i;//variavel que sera calculado o fatorial
	
	fatorial(i);//chamada da função
			
return 0;
}
void fatorial(int x)//primeira função do fatorial
{
	int acum;// variavel que vai receber a pilha que vai ser desmontada com o valor de cada linha de pilha
	
	if(x<=1){
		acum= fat(x);// chamando outra função que calcula o fatorial para poder
		cout<<x*acum<<endl;	// imprimir o inverso porque não tem como calcular o fatorial e imprimir porque fat tem que ter retorno
	   
	
		
	}
	else{
		acum= fat(x-1);
		cout<<x*acum<<endl;//usado para voltar ao caso inicial
		fatorial(x-1);
	}
	
}
int fat(int x){//segunda função que calcula o fatorial normal
	
	if(x<=1){
		return 1;
		
	}
	else
	 return x * fat(x-1);
}