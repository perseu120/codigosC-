#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int tam=5, matriz[tam][tam], h, po=0;
	
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;){
			h=rand()%(100);
			cout<<h<<endl;
			
			if(matriz[i][j]==h){
				po=1;
			}
			if(po==0){
				matriz[i][j]=h;
				j++;
			
			}
			po=0;
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
