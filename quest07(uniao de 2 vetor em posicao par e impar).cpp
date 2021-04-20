#include<iostream>

using namespace std;

int main(){
	int tam2=10;
	
	int vet1[]={1, 2, 3, 4, 5};
	int vet2[]={6, 7, 8, 9, 10};
	int  vet3[tam2];
	
	for(int i=0, j=0, k=0;i<tam2; i++){
		
		if(i%2==0){
			vet3[i]=vet1[j];
			j++;
		}
		else if(i%2==1){
			vet3[i]=vet2[k];
			k++;
		}
		
	}
	
	for(int i=0; i<tam2; i++){
		
		cout<<vet3[i]<<endl;
		
	}
	
	
	
	
	return 0;
}