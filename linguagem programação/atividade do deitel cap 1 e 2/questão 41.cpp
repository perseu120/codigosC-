#include <iostream>
#include <locale.h>


using namespace std;

int main( ){
	
	setlocale(LC_ALL,"portuguese");
	
	int x, y, aux=0;
	
	cout<<"digite o ultimo numero da seguencia:";
	cin>>x;
	
	y=x;
	
	for(;x>=0;x--){
					
		aux=aux+x;
	}
	
	cout<<"a media dos valores precedentes ao valor digitado é:"<<aux/y;	
	
		
	return 0;
}
