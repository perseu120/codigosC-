/*questão 04) Utilizando uma estrutura, faça um programa
que permita a entrada de nome, endereço e telefone de 5 pessoas
e os imprima em ordem alfabética.*/
#include <iostream>
#include <cstring>

using namespace std;
const int t=2;
struct PESS{
	string nome;
	string end;
	int tel;
	
}v[t];
int main(){
	
	string aux;
	int aux2;
	
	
	
	for(int i=0;i<t;i++){
		cin>>v[i].nome;
		cin.ignore();
		getline(cin,v[i].end);
		cin>>v[i].tel;

	}
	
	
	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			
			if(v[i].nome<v[j].nome){
				aux=v[i].nome;
				v[i].nome=v[j].nome;
				v[i].nome=aux;
				
				aux=v[i].end;
				v[i].end=v[j].end;
				v[j].end=aux;
				
				aux2=v[i].tel;
				v[i].tel=v[j].tel;
				v[j].tel=aux2;
					
			}
			
			
		}
	
		
	}
	for(int i=0;i<t;i++){
		cout<<v[i].nome<<endl;
		cout<<v[i].end<<endl;
		cout<<v[i].tel<<endl<<endl;
	}
	
	
	return 0;
}