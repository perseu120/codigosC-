/*josimar cruz souza
data: 13/08/2018
programa que conta ate 100 e soma */

#include<iostream>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int soma=0;
	
	for(int cont=0; cont<=100; cont++)
	{
		cout<<cont<<endl;
		soma=soma+cont;
	}
	cout<<"a soma de todos são"<<soma;
	
	return 0;
}
