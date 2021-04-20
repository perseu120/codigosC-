#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int tam=50, a=0;
	char vetor[tam];
	cin>>vetor;

	while(vetor[a]!='\0'){		
		vetor[a];
		a++;	
	}
	
	for(int i=a;i>=0;i--){
		cout<<vetor[i];
	}
	
	return 0;
}
