/* josimar cruz souza
data:08/08/2018
programa que coloca expoente e pula uma linha*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int linha;
	
	cin>>linha;
	
	for(int pot=1;pot<=linha;pot++)
	{
	cout<<"i^"<<pot<<endl;
	
	}
	
	
	return 0;
}
