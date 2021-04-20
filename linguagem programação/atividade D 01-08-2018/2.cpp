/*josimar cruz souza
data: 01/08/2018
programa que calcula o quanto a memoria do computador suporta*/
#include <iostream>

using namespace std;

int main()
{	
	int n, p, q, resultado;
	char c;
	
	cout<<"digite N:";
	cin>>n;
	cout<<"digite P:";
	cin>>p;
	cout<<"digite C sendo + ou *";
	cin>>c;
	cout<<"digite Q:";
	cin>>q;
	
	if (n>=1 && n<=500.000 && p>=0 && p<=1000 && q>=0 && q<=1000)
	{
		if(	c=='+')
		{
		resultado=q+p;	
		}
		if( c=='*')
		{
		resultado=q*p;
		}
				
		if(resultado<=n)
		{
			cout<<"OK";

		}
		else 
		{
			cout<<"OVERFLOW";
		}
	}

	return 0;
}
