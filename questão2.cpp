#include <iostream>

using namespace std;

int fat(int);

int main(){

    int numero;
    cin>>numero;

    cout<<fat(numero);
    return 0;
}
int fat (int a){

    int aux;
    aux=a-1;

    for(int i=aux;i>0;i--){

    a=a*i;

    }
  return a;
}

