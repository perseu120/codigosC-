/*josimar cruz souza
data: 13/08/2018
programa que calcula a media da turma percentual e a media das notas das provas de alunos*/

#include<iostream>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota,soma=0, chave=0, aluno, porco=0, cont=0;
	
	for(int i=0; i<20; i++)
	{
		for(chave; chave<10; chave++)
		{
			cout<<"digite nota"<<endl;
			cin>>nota;
			soma=soma+nota;
		}
		cout<<"media é "<<soma/10<<endl;
		porco = porco + soma;
		if((soma/10) >5)
		{
			cont++;
		}
	}
	cout<<"a média da turma é: "<<porco/200;
	cout<<"o percentual é "<<(cont*100)/20;
	
	return 0;
}
