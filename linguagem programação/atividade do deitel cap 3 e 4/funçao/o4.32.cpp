//Questão 4.32

#include <iostream>
#include <cstring>

using namespace std;

void pali(string a, int t);

int main (){
	char pld[50];//declarando tamanho da string
	int t;
	cin>>pld;
	t=strlen (pld );//chamando a função
	
	
	return 0;
}
void pali(string a, int t){
	
	if(t==1||t==0){
		cout<<1;
	}else{
		if(a[0]==a[t-1]){//comparando as extttremidades, caso uma delas seja diferente já não é palindromo
			pali(a[0+1],t-1);//diminuido os tamanhos da extremidades
		}else{
			cout<<0;
		}

	}
	
	
	
	
	
}