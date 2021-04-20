#include <iostream>
#include <locale.h>

using namespace std;

int main(){

setlocale (LC_ALL,"portuguese");

float consumo;
int cod, soma=0,soma1=0, soma2=0,cont=0, cont2=0, cont3=0;

do
{


cout<<"digite o código do consumidor\n1 para residencial\n2 para comercial\n3 para industrial\n 0 para sair\n\n";

cin>>cod;

if(cod!=0){



cout<<"digite o consumo duratne o mes\n\n";

cin>>consumo;



if(cod==1){
    cout<<"o consumo é"<<consumo*0.3<<endl;

    soma=soma+consumo*0.3;
    cont2++;

}
else if (cod==2){

    cout<<"o consumo é "<<consumo*0.5<<endl;

    soma1=soma1+consumo*0.5;
    cont3++;
}
else if {
    cout<<"o consumo é "<<consumo*0.7<<endl;

    soma2=soma2+consumo*0.7;

    cont++;
}

}


}while(cod!=0);

cout<<"o total de consumidores industrial"<<cont;
cout<<"a media do um é"<<soma/cont2;
cout<<"a media do dois é"<<soma1/cont3;

return 0;

}

