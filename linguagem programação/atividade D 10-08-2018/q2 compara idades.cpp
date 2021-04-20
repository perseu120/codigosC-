/* josimar cruz souza
data 10/08/2018
programa que calcula a diferença de idade de anacleto e filisberto*/

#include <iostream>

using namespace std;

int main(){
	
	int ana=1.5, filis=1.1, cont=0;
	
	for(;filis<=ana;ana+0.02){
		
		ana+0.02;
		
		filis+0.03;
		
		cont++;
	}
	
	
	cout<<cont<<"anos";
	
	return 0;
}
