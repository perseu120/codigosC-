/*05)Pode-se calcular o quociente da divisão,DIV, de x por y, dois números inteiros,

usando-se a seguinte definição:
se x>y  1+div(x-y,y)
se x<y   0
se x=y   1


Então, pede-se que seja criada uma função recursiva para descrever tal definição. A função deve retornar -1 caso não seja possível realizar o cálculo. Além disso, crie um algoritmo que leia os dois valores inteiros e utilize a função criada para calcular o quociente de
x por y, e imprima o valor computado*/

#include <iostream>

using namespace std;

int div(int, int );// prototipo da função

int main(){
	int n1, n2;
	cin>>n1>>n2;// recebendo numero que vamos calcular o quociente 
	
	cout<<div(n1,n2);
	
	
	return 0;
}
int div(int x, int y){
	if(x==0){
		return -1;
	}
	if(y==0){
		return -1;
	}
	else if(x==y){
		return 1;
	}
	else if(x<y){
		return 0;
	}
	else if(x>y){
		return 1+div(x-y,y);//chamada do caso recursivo
	}






}
