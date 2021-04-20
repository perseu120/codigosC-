


#include<iostream>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float peso, idade, soma=0, chave=0, aluno, porco=0, soma2, cont=0;
	
	for(int i=0; i<30; i++)
	{
		for(chave; chave<12; chave++)
		{
			cout<<"digite peso"<<endl;
			cin>>peso;
			soma=soma+peso;
			
			cout<<"digite idade"<<endl;
			cin>>idade;
			soma2=soma2+idade;
		}
		cout<<"media é de peso é:"<<peso/12<<endl;
		porco = porco + soma;
		cout<<"media é de idade é:"<<idade/12<<endl;
		cont=cont+soma2;
	
	}
	
	cout<<"a média de peso da turma é: "<<porco/360;
	
	cout<<"a média de idade da turma é: "<<cont/360;
	
	return 0;
}
