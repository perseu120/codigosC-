/*assim que o retorno é chamado ele para de executar o progrma, e se colcar para chmar a forma recursiva antes do retorno
da loop infinito */

#include <iostream>

using namespace std;

int main (int, int){
	
	int a, b;
	cin>>a>>b;
	a+b;
	
	cout<<main(a,b);
	return a+b;
	

}