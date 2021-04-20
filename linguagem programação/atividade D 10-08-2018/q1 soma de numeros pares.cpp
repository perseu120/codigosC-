/* josimar cruz souza
data 10/08/2018
programa que soma os numeros pares*/

#include <iostream>

using namespace std;

int main(){
	
	int inicial, final, soma=0;
	
	cout<<"digite o valor inicial";
	cin>>inicial;
	cout<<"digite o valor final";
	cin>>final;
	
	for (inicial;inicial<final;inicial++)
		
		if(inicial%2==0){
			soma=soma+inicial;
		}
		cout<<soma;
	return 0;
	
	
	
}
