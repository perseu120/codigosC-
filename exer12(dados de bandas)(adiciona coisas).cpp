/*12)	Defina uma estrutura que ir� representar bandas de m�sica.
Essa estrutura deve ter o nome da banda,
 que tipo de m�sica ela toca,
  o n�mero de integrantes 
  e em que posi��o do ranking essa banda est� dentre as suas 5 bandas favoritas.
a.	Crie um menu para:
i.	Preencher as informa��es da banda;
ii.	Exibir as informa��es de todas as bandas cadastradas;
iii.	Exibir as informa��es de uma banda, recebendo como par�metro o nome da mesma;
iv.	Exibir as informa��es de uma banda, recebendo como par�metro um n�mero de 1 a 5, que representa a posi��o da banda em seu ranking;
v.	Exibir todas as bandas a partir do tipo de m�sica informada pelo usu�rio;
vi.	Informar se uma banda est� entre as favoritas ou n�o;
vii.	Uma op��o para sair do programa.
*/
#include<iostream>
#include<string>

using namespace std;

struct BANDA{
	string nome;
	string genero;
	int integrantes;
	int rank;
};



int main(){
	string banda, genero;
	int t=5, op=-1, i=0, rank;
	BANDA vetor[t];
	
	
	while(op!=7){
		cout << "1-Preencher as informa��es da banda\n2-Exibir as informa��es de todas as bandas cadastradas\n3-Exibir as informa��es de uma banda, recebendo como par�metro o nome da mesma\n" <<
	"4-Exibir as informa��es de uma banda, recebendo como par�metro um n�mero de 1 a 5, que representa a posi��o da banda em seu ranking\n5-Exibir todas as bandas a partir do tipo de m�sica informada pelo usu�rio\n" <<
   "6-Informar se uma banda est� entre as favoritas ou n�o\n7- op��o para sair do programa\n";
		cin>>op;		
		switch(op){
			case 1:{
				if(i==5){
					cout<<"cheio";
				}else{
				
					cout<<"\nnome ";
					cin>>vetor[i].nome;
					cout<<"\ngenero ";
					cin>>vetor[i].genero;
					cout<<"\nintegrantes ";
					cin>>vetor[i].integrantes;
					cout<<"\nrank ";
					cin>>vetor[i].rank;
				}
				i++;
				break;
			}
			
			case 2:{
				for(int j=0;j<i;j++){
					cout<<"\nnome ";
					cout<<vetor[j].nome;
					cout<<"\ngenero ";
					cout<<vetor[j].genero;
					cout<<"\nintegrantes ";
					cout<<vetor[j].integrantes;
					cout<<"\nrank ";
					cout<<vetor[j].rank;	
				}
				
				
				break;
			}
			
			case 3:{
				cout<<"digite o nome da banda";
				cin>>banda;
				for(int j=0;j<t;j++){
					if(banda==vetor[j].nome){
						cout<<"\ngenero ";
						cout<<vetor[j].genero;
						cout<<"\nintegrantes ";
						cout<<vetor[j].integrantes;
						cout<<"\nrank ";
						cout<<vetor[j].rank;
					}else{
						cout<<"banda nao existe";
					}					
					
					
				}

				break;
			}
			
			case 4:{
				cout<<"digite o rank";
				cin>>rank;
				for(int j=0;j<t;j++){
					if(rank==vetor[j].rank){
						cout<<"nome ";
						cout<<vetor[j].nome;
						cout<<"\ngenero ";
						cout<<vetor[j].genero;
						cout<<"\nintegrantes ";
						cout<<vetor[j].integrantes;
						cout<<"\nrank ";
						cout<<vetor[j].rank;
					}else{
						cout<<"banda nao existe";
					}	
					
				break;
				}
			}
			
			case 5:{
				cin>>genero;
				for(int j=0;j<i;j++){
					if(genero==vetor[j].genero){
						cout<<"nome ";
						cout<<vetor[j].nome;
						cout<<"\ngenero ";
						cout<<vetor[j].genero;
						cout<<"\nintegrantes ";
						cout<<vetor[j].integrantes;
						cout<<"\nrank ";
						cout<<vetor[j].rank;
					}else{
						cout<<"banda nao existe";
					}					
					
				}

				break;
			}
			case 6:{
				for(int j=0;j<i;i++){
					
					if(vetor[j].rank>3){
						cout<<vetor[j].nome<<" favorita\n";
					}
					
				}
				
				break;
			}
			case 7:{
				return 0;
				break;
			}
			default:{
				cout<<"op invalida\n\n";
			}
			
		}
	}	
	
	
	return 0;
}
