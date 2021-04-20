/*josimar cruz souza
data: 01/08/2018
programa que calcula a diferença de peso da gangora*/
#include<iostream>
using namespace std;
int main()
{
	float p1, p2, c1,c2;
	
	cout<<"digite o comprimento do lado esquerdo";
	cin>>c1;
	cout<<"digite o comprimento do lado direito";
	cin>>c2;
	cout<<"digite o peso do lado esquerdo";
	cin>>p1;
	cout<<"digite o peso do lado direito";
	cin>>p2;
	
	if(p1>=10 && p1<=100 && c1>=10 && c1<=100 && p2>=10 && p2<=100 && c2>=10 && c2<=100 )
	{
			

		
		if (p1*c1==p2*c2)
		{
			cout<<"0";
		}
		else if(p1*c1>p2*c2)
		{
			cout<<"-1";
		}
		else
			cout<<"1";
	}
	else 
	{
		cout<<"invalido";	
	}
		
		
	return 0;
}
