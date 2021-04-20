/*04)Faça uma função recursiva que receba um número inteiro positivo N
 e imprima todos os números naturais de 0 até N em ordem decrescente*/

#include <iostream>

int seq (int);

using namespace std;

int main(){
	int t;
	cin>>t;

	cout<<seq(t);

	return 0;
}
int seq(int a){
	if(a==0){
		return a;
	}
	else{
		cout<<a;
		return seq(a-1);
	}
	
}

