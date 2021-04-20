#include <iostream>

using namespace std;

int main()
{
	int aprovado= 0, reprovado= 0,opcao,chave=1;
	
	while (chave <= 10) {
		cout<< "Digite 1 p/ aprovado e 2 p/ reprovado: ";
		cin>> opcao;
	
	{
	if (opcao == 1) {
		aprovado = aprovado + 1;
	}
	else if (opcao == 2){
		reprovado= reprovado + 1;
	}
	else if (opcao != 1 && opcao != 2){
	}
		opcao= opcao- 1;
	}
		
		chave++;	
	}
	
	cout<< "Aprovados: " << aprovado <<endl;
	cout<< "Reprovados: " << reprovado<<endl;
	
return 0;	
}
