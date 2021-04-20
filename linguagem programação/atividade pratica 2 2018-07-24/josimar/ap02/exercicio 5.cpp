/*Josimar Cruz Souza
data 24/07/2018
programa que converte de dola para reais*/

#include<iostream>
#include<iomanip>
#include<locale.h>
#include <stdio.h>

using namespace std;

int main(){


setlocale(LC_ALL, "portuguese");

 double result,reais, dolar;

cout<<"Ola vamos converter as moedas Reais para Dolar\n";

cout<<"ao digitar valores use '.' não use ','!";

cout<<"\nmuito bem!\nPrimeiro vou precisar que, \ndigiti o quanto em rais que quer converter!";

cout<<"\nDigite a quantia em Reais:";
cin>> reais;

cout<<"Digite quanto vale o Dolar:";
cin>> dolar;

cout<<fixed<<setprecision(2);

cout<<setprecision(2);

cout<<" "<<reais<<"R$ vale:"<<reais*dolar<<"Dolares"; 




return 0;
}
