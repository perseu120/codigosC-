/*Utilizando uma estrutura,
faça um programa que permita a entrada de nome, endereço e telefone
 de 5 pessoas e os imprima em ordem alfabética.*/
 #include<iostream>
 
 using namespace std;
 
 struct ENDERECO{
	 string rua;
	 int numero;
	 
 };
 
 struct PESSOA{
	 
	 string nome;
	 ENDERECO endereco;
	 int telefone;	 
 };
 
 int main(){
	 int tam=3, g=0;
	 
	 PESSOA pessoa[tam];
	 PESSOA aux;
	 
	 for(int i =0;i<tam;i++){
	 	
		 cin>>pessoa[i].nome;
		 cin>>pessoa[i].endereco.rua;
		 cin>>pessoa[i].endereco.numero;
		 cin>>pessoa[i].telefone;
		 cout<<"_______________________\n";
	 }
	 
	 for(int i=0;i<tam;i++){
		 for(int j=i+1;j<tam;j++){
			 if(pessoa[i].nome[g]>pessoa[j].nome[g]){
				 aux=pessoa[j];
				 pessoa[j]=pessoa[i];
				 pessoa[i]=aux;
			 }
			 
		 }
	 }
	 
	  for(int i=0;i<tam;i++){
		  cout<<pessoa[i].nome<<endl;
		  cout<<pessoa[i].endereco.rua<<endl;
		  cout<<pessoa[i].endereco.numero<<endl;
		  cout<<pessoa[i].telefone;
		  cout<<"\n__________\n";
	  }
	 
	 
	 return 0;
 }