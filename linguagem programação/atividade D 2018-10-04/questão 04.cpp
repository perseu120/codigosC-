/*04)Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N
 e imprima todos os n�meros naturais de 0 at� N em ordem decrescente*/

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

