/*03)Pode-se calcular o resto da divis�o, MOD, de x por y, dois n�meros inteiros positivos, usando-se a seguinte defini��o:

MOD(x - y, y) se x > y MOD(x,y) = x se x < y 0 se x = y

Ent�o, pede-se que seja criada uma fun��o recursiva para descrever tal defini��o.*/

#include <iostream>

using namespace std;

int resto(int, int );// prototipo da fun��o

int main(){
	int n1, n2;
	cin>>n1>>n2;
	
	cout<<resto(n1,n2);
	
	
	return 0;
}
int resto(int x, int y){
	if(x==0){
		return -1;
	}
	if(y==0){
		return -1;
	}
	else if(x==y){
		return 0;
	}
	else if(x<y){
		return x;
	}
	else if(x>y){
		return resto(x-y,y);
	}






}
