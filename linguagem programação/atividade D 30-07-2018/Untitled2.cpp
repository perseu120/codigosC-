#include<iostream>
#include<locale.h>
#include<ctype.h>
using namespace std;

int main(){
 setlocale(LC_ALL,"Portuguese");


 int operacao, an, a1, n, r, q;

 cout<<"Olá usuário, bem vindo ao ArmentOperatorMath(AOM\ninsira um numero\n";
 cin>>a1;
 cout<<"agora digite outro numero\n";
 cin>>n;
 cout<<"Agora o ultimo número, estamos quase lá!!!\n";
 cin>>r;
 cout<<"Por fim, escolha a operação desejada\n";
 cin>>operacao;
 cout<<"Caso escolhe PG, informe o""Q\n";
 cin>>q;

 switch(operacao){
   case 1: an= a1+(n-1)r;
           r = an-a1/(n-1);
           cout<<"O termo geral da Pa é "<<an<<" e a razão dela é "<<r;

   case 2: an=a1q^n-1;
           r=an/n;
           cout<<"O termino geral da PG é "<<an<<" e o razão é "<<r;


   default: cout<<"Insira apenas 1 ou 2, numeros além não irão ser reconhecidos\n";
}
 return 0;
}
