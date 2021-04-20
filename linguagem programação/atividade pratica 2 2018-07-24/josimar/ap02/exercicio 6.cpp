/*josimar cruz souza
data: 24/07/2018
programa que calcula reajuste salarial*/

#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(){
	
setlocale(LC_ALL, "portuguese");	

double sal1, reajust, resul;

cout<<"ao digitar valores use '.' não use ','!";

cout<<"\ndigite o valor do salario atual:";

cin>>sal1;

cout<<"\ndigite a quantidade de reajuste:";

cin>>reajust;

cout<<"O seu novo salario é:"<<((sal1*reajust)/100)+sal1;
	
return 0	
	
}
