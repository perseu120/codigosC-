#include<iostream>
using namespace std;
int somapares(int[], int);
int main()
{
	int t;
	
	cin>> t;
	
	int vet[t];
	
	for (int i = 0; i < t; i++) {
		
		cin>> vet[i];
	}
	
	cout<< somapares(vet, t);
	
return 0;
}

	int somapares(int vet[], int t)
{
	
	if (t == 0) {
		
		return 0;		
	}
	
	else if (vet[t -1] % 2 == 0)  {		
			
		return vet[t-1] + somapares(vet, t-1);		 		
	}
		
	else {
		
		return somapares(vet, t-1);			
	}
}
