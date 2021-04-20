#include <iostream>
#include <locale.h>


using namespace std;

int main( ){
	
	setlocale(LC_ALL,"portuguese");
	
	int v1, v2, v3, h;
	
	cout<<"digite 3 valores, primeiro digite o lado maior:";
	cin>>v1;
	cin>>v2;
	cin>>v3;
	
	h=v1*v1;
	
	if(v1<v2||v1<v3){
		cout<<"valor invalido";
	}
	else if( h==(v2*v2)+(v3*v3)){
		
		cout<<"é triangulo retangulo";
	}






	return 0;
}
