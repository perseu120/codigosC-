#include <iostream>
#include <locale.h>


using namespace std;

int main( ){
	
	setlocale(LC_ALL,"portuguese");
	
	double  pi=3.14159;
	int raio;
	
	cout<<"digite o raio";
	cin>>raio;
	
	cout<<"a area do curculo �:"<<pi*(raio*raio)<<endl;
	
	cout<<"o diametro �:"<<raio*2<<endl;
	
	cout<<"a circunferencia �:"<<pi*(raio*2);
	
	
	
	
	
	
	
	
	return 0;
}
