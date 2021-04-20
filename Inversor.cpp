#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int T, A, B, aparelho, cont=0, aux=0;
	
	cin>>T;
	
	while(T>0){
		
		cin>>A>>B;
		
	
		while(A!=B || aux!= B){
			aparelho=A;
			
			while( aparelho != 0 ){
			   	aux = aparelho%10+ aux*10;
				aparelho= aparelho/10;
			}
			cout<<aux<<"aux\n";
			if(abs(A-B) > abs(aux-B)){
				A= aux;
				cont++;
			}
			if(A==B ){
			
				break;
			}else if( B==aux){
					cont++;
					break;
				
			}else{
				A++;
				cont++;
			}
			//cout<<A<<"AAA";
			aux=0;
		}
		cout<<cont<<endl;
		
		cont=0;	
		T--;
	}
	
	
	
	return 0;
}