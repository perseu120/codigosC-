/*05)Pode-se calcular o quociente da divis�o,DIV, de x por y, dois n�meros inteiros,

usando-se a seguinte defini��o:
se x>y  1+div(x-y,y)
se x<y   0
se x=y   1


Ent�o, pede-se que seja criada uma fun��o recursiva para descrever tal defini��o. A fun��o deve retornar -1 caso n�o seja poss�vel realizar o c�lculo. Al�m disso, crie um algoritmo que leia os dois valores inteiros e utilize a fun��o criada para calcular o quociente de
x por y, e imprima o valor computado*/

#include <iostream>

using namespace std;

int div(int, int );// prototipo da fun��o

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
