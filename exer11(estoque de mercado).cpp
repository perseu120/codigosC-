/*Fa�a um programa que gerencie o estoque de um mercado e:
a. Crie e leia um vetor de 5 produtos com os dados:
c�digo (inteiro)
nome (m�ximo 15 letras)
pre�o
quantidade.

b.Leia um pedido, composto por um c�digo de produto e a quantidade.
Localize este c�digo no vetor
se houver quantidade suficiente para atender ao pedido integralmente
atualize o estoque e informe o usu�rio.
Repita este processo at� ler um c�digo igual a zero.
Se por algum motivo n�o for poss�vel atender ao pedido,
mostre uma mensagem informando qual erro ocorreu.*/

#include<iostream>
#define tam 15

using namespace std;
struct PRODUTO{
	int codigo;
	char nome[tam];
	float preco;
	int quantidade;
	
};

int main(){
	int t=2, cod, quant, muda=0;
	
	PRODUTO estoque[t];
	
	for(int i=0;i<t;i++){
		cout<<"digite o cod da protuto "<<i+1<<" ";
		   cin>>estoque[i].codigo;
		   cout<<"\nnome ";
		   cin>>estoque[i].nome;
		   cout<<"\npreco ";
		   cin>>estoque[i].preco;
		   cout<<"\nquantidade ";
		   cin>>estoque[i].quantidade;
		   cout<<"_________________________\n\n";
	}
	cout<<"digite seu pedido";
	cout<<"digite o cod do produto";
	cin>>cod;
	while(cod!=0){
		cout<<"digite a quantidade";
		cin>>quant;
		for(int i=0;i<t;i++){
			if(estoque[i].codigo==cod){
				muda=1;
				if(estoque[i].quantidade>=quant){
					estoque[i].quantidade=estoque[i].quantidade-quant;
					cout<<"sobrou "<<estoque[i].quantidade<<" no estoque\n";
					
				}else{
					cout<<"nao tem produtos suficiente\n";
				}				
			}
		}
		
		if(muda==0){
			cout<<"produto n�o existente\n";
		}else{
			muda=0;
		}
		cout<<"digite seu pedido";
		cout<<"digite o cod do produto\n";
		cin>>cod;
		
	}
	
	
	
	
	
	
	
	return 0;
}