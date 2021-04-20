#include <iostream>

using namespace std;

int main(){

int vetor[10], cont=0;


for(int a=0;a<10;a++){
    cin>>vetor[a];
}

for(int e=0;e<10;e++){
    for(int i=1;i<=vetor[e];i++){
        if(vetor[e]%i==0){
            cont++;
        }

    }
     if(cont<=2){
        cout<<e<<" ";
        cout<<vetor[e]<<"\n";
     }
    cont=0;


}





return 0;
}
