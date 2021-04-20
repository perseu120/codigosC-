/*03) (Valor 2,5)Responda:
a) Faça um programa que dada uma matriz de inteiros [1,2,3,4,5,6,7,8,9]
devolve o quarto elemento, utilizando ponteiros; 

b) A função strcpy recebe dois argumentos, um destino e uma origem de uma string,
ou seja, faz a cópia de uma string em outra.

Faça um procedimento copia que simule a strcpy, usando ponteiros; 
c) Faça a varredura dos elementos de uma matriz [20] x [20] para que todos os elementos da matriz seja igual a 0.0*/
#include <iostream>
#include <iomanip>
using namespace std;

void strcopy( string gato, string *ptr);//prototipo da função

int main(){
	char op;// opção para qual alternativa fazer
	
	string flash;//variabel para receber nome
	string kid;//variavel para receber copia do nome
	string *ptr;	//ponteiro para ser copiado
	
	ptr=&flash;// passando o endereço da variavel
	cout<<kid;// imrimindo a variavel que foi trocada
	
	float matriz[20][20];//declarando a matri para responder a letra c)
	
			
	
	
	do{
		cin>>op;
		
		switch(op){
			case 'a':{//responde o inten a)
				int m[3][3];
				int h=1;
				int *ptr4;
				
				for(int i=0;i<3;i++){
					for(int j=0;j<3;j++){
					
						m[i][j]=h;
						h++;
					}
				}
				ptr4=&m[1][0];
				cout<<*ptr4;
				
				break;
			}
			case 'b':{	//responde o inten b)
				cout<<" digiti a string\n";
				cin>> flash;
				strcopy(kid,ptr);
				
				break;
			}
			case 'c':{//responde o inten c)
				for(int i=0;i<20;i++){
					for( int j=0;j<20;j++){
						
						matriz[i][j]=0;
						cout<<matriz[i][j]<<setprecision(3)<<",0 ";
					}
					cout<<endl;
				}
				
				
				
			}
			
			case '0':{//sai do programa coloquei um caso para ele não cair no default antes de sair
				break;
			}

		
			default:{//para quando digitar opção invalida
				cout<<" invalida\n";
			}
			
		}
	
	}while(op!='0');
	
	
	return 0;
}
void strcopy( string kid, string *ptr){//função que faz a copia
	
	kid=*ptr;
	cout<<kid;
}


























