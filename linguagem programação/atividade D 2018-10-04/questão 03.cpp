/* 03)Desenvolva uma função recursiva que calcule e mostre o maior elemento
 de um arranjo (array) de tamanho N. Os elementos sao  números inteiros*/
#include <iostream>

int maior ( int [],int, int);

using namespace std;

int main(){
	
	int t, up;
	cin>>t;
	int v[t];
	
	for(int i=0;i<t;i++){
		cin>>v[i];
		if(i==0){
			up=v[i];
		}
	}
	
	cout<<maior(v,t,up);
	
	return 0;
}
int maior( int vet[],int a, int upp){
	
	if(a<=1){
		return 0;
	}
	else{
		for(int i=1;i<a;i++){
			if(upp<vet[i]){
				upp=vet[i];
			}
		}
		return upp;
	}
	
	
}

