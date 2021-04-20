/*questão 3.17 livro*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
srand(time(NULL));
	
	const int t=5;
	int a[t]={2,4,6,8,10};// colocalndo valores no vetor
	int b[t]={3,5,7,9,11};
	int c[t]={6,10,14,18,22};
	
	
	
	cout<<"conjunto 1"<<a[rand()%5]<<endl;// escolhaendo posição aleatoria e imprimindo seu valor
	
	cout<<"conjunto 2"<<b[rand()%5]<<endl;
	
	cout<<"conjunto 3"<<c[rand()%5]<<endl;
	return 0;
}
