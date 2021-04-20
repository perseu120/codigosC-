#include <iostream>
#include <locale.h>


using namespace std;

int main( ){
	
	setlocale(LC_ALL,"portuguese");
	
	int x, y, aux=0;
	
	cin>>x;
	
	y=x;
	
	for(int x=0;y>0;y--){
		
		cin>>x;
		
		aux=aux+x;
	}
	
	cout<<"resultado é"<<aux;	
	
		
	return 0;
}
