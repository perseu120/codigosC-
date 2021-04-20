#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main(){

setlocale(LC_ALL,"portuguese");

	string vetor[50], reverso[50];
	int a=0;
	
	cin>>vetor[50];
	
	while(vetor[a]!='\0'){		
		vetor[a];
		a++;	
	}
	
	for(int i=a;i>=0;i--){
		reverso[i]=vetor[i];
	}
	if(vetor==reverso){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
		
	
	return 0;
}
