//Questão 3.46
/*não é possivel chama a main recursivamete e deu erro,
ao criar uma variavel do tipo static diz que a variavel precisa de um tipo */

#include <iostream>

using namespace std;

int main (int, int){
	
	int a, b;//declarando valores
	cin>>a>>b;
	a+b;//somando os valores
	
	cout<<main(a,b);//chamando a função main dentro da main
	
	
	return a+b;
}