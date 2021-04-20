/* nome:josimar
data:24-07-2018
programa que solicite ao usuario o valor do litro de combustivel*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
float vl;

float qt;

float l;

cout<<"Digite o valor por litro \n";

cin>> vl;

cout<<"Digite quanto vai abastecer \n";

cin>>qt;

l=qt/vl;

cout<<"litros" <<fixed<<setprecision(2)<<l;

system ("PAUSE");

return 0;

}
