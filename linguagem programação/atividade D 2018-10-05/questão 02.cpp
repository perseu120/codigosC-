/*02)Um problema t�pico em ci�ncia da computa��o consiste em converter um n�mero da sua forma
decimal para a forma bin�ria. Por exemplo, o n�mero 12 tem a sua representa��o bin�ria igual a 1100.
A forma mais simples de fazer isso � dividir o n�mero sucessivamente por 2,
onde o resto da i-�sima divis�o vai ser o d�gito i do n�mero bin�rio (da direita para a esquerda).*/
#include <iostream>

using namespace std;

void bin(int );// prototipo da fun��o

int main(){
	int n;
	cin>>n;//receber o numero decimal para vira binario

	bin(n);//chamada da fun��o para o numero digitado
	
	return 0;
}
void bin (int num){
	
	if (num !=0){  // toda ver que n for diferente de 0 ele vai dividir num pro 2 ate chegar no caso em que num vai ser igual a 0
		bin(num/2); // chamada do caso recursivo 
	
		cout<<(num%2);//toda ver que dividir num por 2 eu vou pega o resto de mostra na tela, na hora que ele tiver retornando a pilha
	}

}
