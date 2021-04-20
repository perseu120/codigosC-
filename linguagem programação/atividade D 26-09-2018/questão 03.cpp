#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int linha, cont;
	int matriz[linha][cont];
	
	cin>>linha;
	
	for(int i=0;i<linha;i++){//prencher matriz com 0
		for(cont=0;cont<i;cont++){
			matriz[i][cont]=0;
			
		}
		cout<<endl;
	}
	for(int i=0;i<linha;i++){//prencher coluna 1 e diagonal principal com 1
		for(cont=0;cont<i;cont++){
			if(cont==i){
				matriz[i][cont]=1;
			}
			if(i<linha&&cont==0){
				matriz[i][cont]=1;
			}
			
		}
		cout<<endl;
	}
	
		for(int i=0;i<linha;i++){
		for(cont=0;cont<i;cont++){
			cout<<matriz[i][cont]<<"  ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<linha;i++){
		for(cont=0;cont<i;cont++){
			if(i==cont-1){
				matriz[i][cont]=1;
			}

		}
		cout<<endl;
	}
	
	for(int i=0;i<linha;i++){
		for(cont=0;cont<i;cont++){
			if(i==0){
				matriz[i][cont]=1;
			}
			if(i==1){
				matriz[i][cont]=1;
			}
			if(i>1){
				matriz[i][cont]=matriz[i-1][cont]+matriz[i-1][cont-1];
			}
			
			
			
		}
	}
	for(int i=0;i<linha;i++){
		for(cont=0;cont<i;cont++){
			cout<<matriz[i][cont]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
