#include <iostream>
#include <locale.h>


using namespace std;

int main( ){
	
	setlocale(LC_ALL,"portuguese");
	
	double n, n2, n3;
	
	cout<<"digite 3 valores:";
	cin>>n;
	cin>>n2;
	cin>>n3;
	
	if(n+n2>n3){
		cout<<"� triangulo";
	}
	else{
		cout<<"n�o � trinagulo";
	}

	return 0;
}
