/*03)Pode-se calcular o resto da divisão, MOD, de x por y, dois números inteiros positivos, usando-se a seguinte definição:

MOD(x - y, y) se x > y MOD(x,y) = x se x < y 0 se x = y

Então, pede-se que seja criada uma função recursiva para descrever tal definição.*/

#include <iostream>

using namespace std;

int resto(int, int );// prototipo da função

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
