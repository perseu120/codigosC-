#include<iostream>
#include <locale.h>

   using namespace std;
 int main(){
 	
 	setlocale (LC_ALL, "portuguese");
   
   int a,b,opcao;
   
   cout<<"digite um numero";
   
   cin>>a;
   
   cout<<"digite outro numero";
   
   cin>>b;
   
   cout<<"digite qual a opcao do operador\n 1=soma 2=subtração 3=multiplicação 4=divisão 0=sair";
   
   cin>>opcao;
   
   switch (opcao){
   
   case '1':{
   cout<<a+b;}
   break;
   
   case '2':{
   cout<<a-b;}
   break;
   
   case '3':{
   cout<<a*b;}
   break;
   
   case '4':{
   cout<<a/b;} 
   
}
   
   
   return 0;
}
