/*josiamr cruz souza 
data 09/08/2018
programa de tabuada que seleciona so os pares */

#include <iostream>
using namespace std;

int main(){
	
	int  num, result;
	
	cout<<"digite o numero";
	
	cin>>num;
	
	cout<<"vamos multiplicar.";
	
	
	for(int cont=1;cont<11;cont++){
		
		result=num*cont;
		
		if(result%2==0){
			
		cout<<num<<"*"<<cont<<"="<<num*cont<<endl;
			
	}
			
		
		
		
	}
	
	
	
	
	return 0;
	
	
}
