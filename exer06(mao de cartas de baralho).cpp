/*06)	Escolha um jogo de cartas, baseado em um "baralho tradicional" (cada carta tem seu naipe e seu valor) ou tipo "super trunfo" (cada carta possui um conjunto de atributos). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores, considerando que cada jogador irá receber 5 cartas. Exiba na tela as cartas que cada um dos jogadores recebeu.

*/

#include<iostream>
#include<locale>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define t 10
using namespace std;

struct cartas{
	int naipe; 
	int numero; // A, 1, 2, 3, 4, 5 6 7 8, 9, 10, J, Q, K
};


 int rand_naipe(){
 	int a;
    a= rand() % 4+1;
  return a;
}

 int rand_num(){
 	int b;
    b= rand() % 13+1;
  return b;
}



void simb(int ok){
	
	char a,b,c,d;
	a=3;b=4;c=5;d=6;
	if(ok==1)
		cout<<a;//imprime A
	else if(ok==2)
		cout<<b; // imprime B
	else if(ok==3)
		 cout<<c; //Imprime C
	else if(ok==4)	 	
		cout<<d; //Imprme d
}

void simbb(int okk){ //função que vai troca os numero pelas cartas que tem letras
	if(okk==1)
		cout<<"A";
	else if(okk==11)
		 cout<<"J";
	else if(okk==12)	 	
		cout<<"Q";
	else if(okk==13)
		cout<<"K";
	 else
	 	cout<<okk;
			
	
}

bool troca_carta(int a, int b, cartas x[], int tam){
	
	for(int i=0;i<tam;i++){
		if(a==x[i].naipe && b==x[i].numero){//verifica se a carta já existe no vetor
			return 1;
		}else
			return 0;
	}
	
}


int main(){
	
		srand(time(NULL));
		setlocale(LC_ALL, "portuguese");
		int a,b;
		a=rand_naipe();
		b=rand_num();
		
		cartas baralho[t];
				baralho[0].naipe=a;
				baralho[0].numero=b;
		
		for(int i=1;i<t;){
			a=rand_naipe();
			b=rand_num();
				
			while(troca_carta(a,b,baralho,i)==1){//enquanto troca carta retorna verdadeiro eu continuo procurando outra carta
				
				a=rand_naipe();
				b=rand_num();	
					
					
					simb(a);
					cout<<" ";
					simbb(b);
					cout<<"jj\n";
		
			}
		
				
				baralho[i].naipe=a;
				baralho[i].numero=b;
				
				i++;
			
				
				
		

					
		}
				
				
		
					
		
	
		for(int i=0;i<5;i++){
		
			
			simb(baralho[i].naipe);
		
			cout<<"  ";
			
				
		}
		
		cout<<"\n";
		
		for(int i=0;i<5;i++){
		
			simbb(baralho[i].numero);
			
			cout<<"  ";		
		}
		
		
		cout<<"\n\n\n";
		
		
		
		
		for(int i=5;i<t;i++){
		
			
			simb(baralho[i].naipe);
		
			cout<<"  ";
			
				
		}
		
		cout<<"\n";
		
		for(int i=5;i<t;i++){
		
			simbb(baralho[i].numero);
			
			cout<<"  ";		
		}
		
		
		
		
	return 0;
}
	
	

