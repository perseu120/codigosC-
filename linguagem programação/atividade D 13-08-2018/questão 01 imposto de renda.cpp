/*josimar cruz souza
data: 13/08/2018
programa que calcula o imposto em cima do salario*/

#include<iostream>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float sal;
	
	cout<<"digite o salário"<<endl;
	
	for(int i=0; i<10; i++)
	{
		cout<<"digite o salário"<<endl;
		cin>>sal;
		if(sal<600)
		{
			cout<<"isento"<<endl;
		}
		if(sal>=600 && sal<1500)
		{
			cout<<sal*0.10<<endl;
		}
		if(sal>=1500)
		{
			cout<<sal*0.15<<endl;
		}
	}
	
	return 0;
}
