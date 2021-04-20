/*03 escreva uma função que receba por parametro um valor inteiro  e positivo N e retorna o valor de S
S=1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/N */

#include <iostream>

using namespace std;

float s(int);

int main(){

    int valor;
    cin>>valor;

    cout<<s(valor);

    return 0;
}

float s( int a){
    float s=1;

    for(int i=2;i<=a;i++){
        s=s+(1.0/i);
    }

    return s;
}
