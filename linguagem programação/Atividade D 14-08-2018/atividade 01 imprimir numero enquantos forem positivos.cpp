#include <iostream>
#include <locale.h>

using namespace std;

int main(){

int num, cont=0;

do{

    cout<<"digte um numero inteiro, digite um numero negativo para sair";


    cin>>num;

    cont++;

}
while(num>=0);

cout<<cont-1;

return 0;

}
