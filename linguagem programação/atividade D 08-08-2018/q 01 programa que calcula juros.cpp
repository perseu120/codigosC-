/*josimar cruz souza
data 08/08/2018
programa que calcula juros */

#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	float juros, mes;
	int investimento;
	
	cin>> investimento;
	cin>> mes;
	cin>> juros;
	
	juros=juros/100;
	
	
	for(int cont=1;cont<=mes;cont++){
		
	cout<<investimento*pow((1+juros),cont)<<endl;
	
	}
	
	
	
	
	
	return 0;	
}
