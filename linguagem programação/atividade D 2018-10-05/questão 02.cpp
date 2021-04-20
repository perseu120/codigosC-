/*02)Um problema típico em ciência da computação consiste em converter um número da sua forma
decimal para a forma binária. Por exemplo, o número 12 tem a sua representação binária igual a 1100.
A forma mais simples de fazer isso é dividir o número sucessivamente por 2,
onde o resto da i-ésima divisão vai ser o dígito i do número binário (da direita para a esquerda).*/
#include <iostream>

using namespace std;

void bin(int );// prototipo da função

int main(){
	int n;
	cin>>n;//receber o numero decimal para vira binario

	bin(n);//chamada da função para o numero digitado
	
	return 0;
}
void bin (int num){
	
	if (num !=0){  // toda ver que n for diferente de 0 ele vai dividir num pro 2 ate chegar no caso em que num vai ser igual a 0
		bin(num/2); // chamada do caso recursivo 
	
		cout<<(num%2);//toda ver que dividir num por 2 eu vou pega o resto de mostra na tela, na hora que ele tiver retornando a pilha
	}

}
