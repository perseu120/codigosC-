/* nome:josimar
data:24-07-2018
programa que calcula a media de combustivel de um veiculo*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
float km_inicial;

float km_final;

float l_gastos;

float media;

cout<<"Digite a quantidade de kilomentros inicial \n";

cin>> km_inicial;

cout<<"Digite a quantidade de kilomentros final \n";

cin>> km_final;

cout<<"quantidade de litros gastos";

cin>> l_gastos;

media=(km_final - km_inicial)/l_gastos;

cout<<"consumo " <<fixed<<setprecision(2)<<media;

//system ("PAUSE");

return 0;

}

