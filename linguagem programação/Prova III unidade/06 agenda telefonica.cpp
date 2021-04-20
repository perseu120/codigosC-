/*06) (Valor 1,5) Faça um programa que crie uma agenda telefônica, para isso,
deverá ser feito um menu com as opções:
cadastrar, visualizar, alterar e sair.
A agenda será um struct, utilize vetores, com 15 registros.*/
#include <iostream>
#include <locale.h>

using namespace std;
struct AGENDA {//declaração a agenda que é uma struct
	string nome;
	string sobrenome;
	long int num;
};
int main(){
setlocale(LC_ALL,"portuguese");
	
	int x=2;//declaração das variavel e do vetor de struct linha 17 ate 20
	int y;
	AGENDA v[x];
	int op;
	
	cout<<"digite a opção:";
	cin>>op;//escolher a opção de o que fazer na agenda
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
				cout<<"invalida";//pra quando digita uma opção invalida
			}
			
		}
		cout<<"digite a opção";
		cin>>op;
		
		
		
		
		
		
	}
	
	
	
	
	return 0;
}