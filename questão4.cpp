/*escreva uma função que recebe por parametro um valor inteiro e positivo N e retorna o valor de S
s=1 + 1/1! + 1/2! + 1/3! + 1/N!*/
#include<iostream>

using namespace std;

float s(int);
int fat(int);

int main(){

    int N;
    cin>>N;
    cout<<s(N);

    return 0;
}
float s(int n){

    float s=1;

    for(int i=2;i<=n;i++){
        s=s+(1.0/fat(i));
    }
    return s;
}
int fat (int a){

    int aux;
    aux=a-1;

    for(int i=aux;i>0;i--){

    a=a*i;

    }
  return a;
}
