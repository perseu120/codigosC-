#include <iostream>
#include <locale.h>

using namespace std;



int main(){
	
	setlocale ( LC_ALL, "portuguese" );
	
	int ano;
	
	cout<<"digite um ano";
	cin>> ano;
	
	if(ano%4==0&&ano%100==0){
		cout<<"ano é bissexto\n";}
		
	else{
		cout<<"não é bissexto\n";
	}
	
	
	system ("PAUSE");
	
	return 0;
	
}

