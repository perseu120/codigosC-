


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
		cout<<"media � de peso �:"<<peso/12<<endl;
		porco = porco + soma;
		cout<<"media � de idade �:"<<idade/12<<endl;
		cont=cont+soma2;
	
	}
	
	cout<<"a m�dia de peso da turma �: "<<porco/360;
	
	cout<<"a m�dia de idade da turma �: "<<cont/360;
	
	return 0;
}
