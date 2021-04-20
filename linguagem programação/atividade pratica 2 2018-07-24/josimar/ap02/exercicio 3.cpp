/*josimar cruz souza
data 24/07/2018
programa que calcula multa por dia de atraso*/

#include <iostream>
using namespace std;

int main(){
	
	float divida, dias, multa_por_dia, valor_total;
	
	cout<<"digite o valor da divida ";
	cin>>divida;
	cout<<"\ndias atrasdos";
	cin>>dias;
	cout<<"\ndigite o valor da multa por dia ";
	cin>>multa_por_dia;
	
	valor_total=divida+multa_por_dia*dias;
	
	cout<<"\no valor total e "<<valor_total;
	
	return 0;
	
}
