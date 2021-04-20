#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
float  valor;
int nota;

cin>>valor;

cout<<"NOTAS:"<<endl;
nota=valor/100;
cout<<nota<<" nota(s) de R$ 100.00"<<endl;
valor=valor-100*nota;
nota=valor/50;
cout<<nota<<" nota(s) de R$ 50.00"<<endl;
valor=valor-50*nota;
nota=valor/20;
cout<<nota<<" nota(s) de R$ 20.00"<<endl;
valor=valor-20*nota;
nota=valor/10;
cout<<nota<<" nota(s) de R$ 10.00"<<endl;
valor=valor-10*nota;
nota=valor/5;
cout<<nota<<" nota(s) de R$ 5.00"<<endl;
valor=valor-5*nota;
nota=valor/2;
cout<<nota<<" nota(s) de R$ 2.00"<<endl;
valor=valor-2*nota;

cout<<"MOEDAS:"<<endl;
nota=valor/1;
cout<<nota<<" moeda(s) de R$ 1.00"<<endl;
valor=valor-1*nota;
nota=valor/0.50;
cout<<nota<<" moeda(s) de R$ 0.50"<<endl;
valor=valor-0.50*nota;
nota=valor/0.25;
cout<<nota<<" moeda(s) de R$ 0.25"<<endl;
valor=valor-0.25*nota;
nota=valor/0.10;
cout<<nota<<" moeda(s) de R$ 0.10"<<endl;
valor=valor-0.10*nota;
nota=valor/0.05;
cout<<"xxx"<<setprecision(3)<<valor<<"xxx\n";
cout<<nota<<" moeda(s) de R$ 0.05"<<endl;
valor=valor-(0.05*nota);
nota=valor/0.01;
cout<<setprecision(4)<<nota<<" moeda(s) de R$ 0.01"<<endl;


    return 0;
}