/*01) (Valor 1,5)Crie um programa para calcular a área e o perímetro de um hexágono.
O seu programa deve implementar uma função chamada calcula_hexagono
que calcule a área e o perímetro de um hexágono regular de lado L.
A função deve obedecer o seguinte protótipo:
void calcula_hexagono(float l, float *area, float *perimetro);
Lembrando que a área e o perímetro de um hexágono regular são dados por:
A=(3*l² raiz quadrada de 3)/2
P=6*l
*/
#include<iostream>
#include <cmath>
using namespace std;

void calcula_hexagono(float l, float *area, float *perimetro);

int main(){
	float l;// variavel que recebe o loado
	float are;//variavel que recebe a area
	float p;//variavel para receber o perimetro
	float *area;//pnteiro que apontara para a area
	float *perimetro;//ponteiro que apontara para o perimetro

	cin>>l;//recebendo o lado
	
	area=&are;//colocando os endereço das variaveis nos ponteiros
	perimetro=&p;
	
	calcula_hexagono(l,area,perimetro);//chamada da função
	
	cout<<are<<endl<<p;//imprimindo a area e o ponteiro
	return 0;
}
void calcula_hexagono(float l, float *a, float *p){
	
	
	*a=(3*(l*l)*sqrt(3))/2;//calculando a area
	*p=6*l;//calculando o perimetro
}