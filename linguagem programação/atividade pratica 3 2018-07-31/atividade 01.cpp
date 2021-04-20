/*josimar cruz souza
data:31/07/2018
programa que calcula o aumento do salario*/

#include <iostream>
#include <locale.h>

using namespace std;

int main( ){

setlocale(LC_ALL,"PORTUGUESE");

char plano;
float salario;

cout<< "digite a qual plano de trabalho você pertence: A, B ou C: ";
cin>>plano;
cout<<"digite o quanto você ganha:";
cin>>salario;

switch(plano){

    case 'a': case 'A':
        cout<<"seu salario com reajuste é:" << salario*1.1;
        break;

    case 'b': case 'B':
        cout<<"seu salario com reajuste é:"<<salario*1.15;
        break;

    case 'c': case 'C':
        cout<<"seu salario com reajuste é:"<<salario*1.2;
        break;

    default:
        cout<<"opção invalida tente novamente!";
}


return 0;

}






