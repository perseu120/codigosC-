/*josimar cruz souza
data:31/07/2018
programa que leia numero e escreva*/

#include <iostream>

using namespace std;

int manip(){

int numero;

cout<<"digite um numero de 0 a 10, que eu ti mostro como escreve!: ";
cin>> numero;

switch(numero)
{

    case 0:
        cout<<"se escreve assim: Zero:";
        break;

    case 1:
        cout<<"se escreve assim: Um:";
        break;

    case 2:
        cout<<"se escreve assim: Dois:";
        break;
    case 3:
        cout<<"se escreve assim: Tres:";
        break;

    case 4:
        cout<<"se escreve assim: Quatro:";
        break;

    case 5:
        cout<<"se escreve assim: Cinco:";
        break;
    case 6:
        cout<<"se escreve assim:Seis";
        break;

    case 7:
        cout<<"se escreve assim: Sete:";
        break;

    case 8:
        cout<<"se escreve assim: Oito:";
        break;
    case 9:
        cout<<"se escreve assim: Nove:";
        break;

    case 10:
        cout<<"se escreve assim: Dez";
        break;

    default:
        cout<<"opção invalida tente novamente!";
}
    return 0;
}
