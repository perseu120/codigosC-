/* josimar cruz souza
data:08/08/2018
programa que calcula o recerso de um numero*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int n, n2=0;
	
	int x;
	
	cin>>n;
	
	x=n;
	
	while(n!=0){
		(n2=n%10 + n2*10);
		n=n/10;
	}
	
	if(x==n2){
		cout<<"� pal�ndromo";
	}
	else{
		cout<<"n�o � pal�ndromo";
	}
	
	return 0;
}
