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

    int aux=1;

    for(int i=1;i<=a;i++){

    aux= aux*i;

    }
  return aux;
}
