#include <iostream>

using namespace std;

int main(){

int tam=5, vetor[tam], tor[tam],cont=0, vet[tam], odin=0;

for(int a=0;a<tam;a++){
    cin>>vetor[a];
}


for(int e=0;e<tam;e++){
    cin>>tor[e];
}

for( int i=0;i<tam;i++){
    for(int o=0;o<=tam;o++){
        if(vetor[i]==tor[o]){  
			if(cont==0){
			vet[cont]=vetor[i];
			cont++;
			break;			
			}			
			else{
				for(int u=0;u<cont;u++){
					if(vetor[i]==vet[u])
					odin=1;
				}
				if(odin==0){
					vet[cont]=vetor[i];
					cont++;
					break;
				}
				odin=0;
				
			}
			
        	

        }
    }

}

for(int cao=0;cao<cont;cao++){
	cout<<vet[cao]<<" ";
}




return 0;
}
