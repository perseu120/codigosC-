/*06) (Valor 1,5) Fa�a um programa que crie uma agenda telef�nica, para isso,
dever� ser feito um menu com as op��es:
cadastrar, visualizar, alterar e sair.
A agenda ser� um struct, utilize vetores, com 15 registros.*/
#include <iostream>
#include <locale.h>

using namespace std;
struct AGENDA {//declara��o a agenda que � uma struct
	string nome;
	string sobrenome;
	long int num;
};
int main(){
setlocale(LC_ALL,"portuguese");
	
	int x=2;//declara��o das variavel e do vetor de struct linha 17 ate 20
	int y;
	AGENDA v[x];
	int op;
	
	cout<<"digite a op��o:";
	cin>>op;//escolher a op��o de o que fazer na agenda
	while(op!=0){
		
		switch(op){
			case 1:{//cadastra o nome
				cout<<"digite qual cliente quer cadastra 1 a 15: ";
				cin>>y;
				cin>>v[y-1].nome;
				cin>>v[y-1].sobrenome;
				cin>>v[y-1].num;
				
				break;
			}
			case 2:{//visualizar o que tem na agenda
				cout<<"\ndigite qual cliente quer visualiza 1 a 15";
				cin>>y;
				cout<<v[y-1].nome;
				cout<<v[y-1].sobrenome;
				cout<<v[y-1].num;
				
				break;
			}
			case 3:{//altera o s dados de algum cliente
				cout<<"\ndigite qual cliente quer altera 1 a 15";
				cin>>y;
				cin>>v[y-1].nome;
				cin>>v[y-1].sobrenome;
				cin>>v[y-1].num;
				
				break;
			}
			case 0:{
				
				break;
			}
			default :{
				cout<<"invalida";//pra quando digita uma op��o invalida
			}
			
		}
		cout<<"digite a op��o";
		cin>>op;
		
		
		
		
		
		
	}
	
	
	
	
	return 0;
}