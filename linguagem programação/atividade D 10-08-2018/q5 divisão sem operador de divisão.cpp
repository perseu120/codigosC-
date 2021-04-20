#include<iostream>

using namespace std;

int main(){
	
	int num, num2,x, soma=0;
	
	cout<<"digite divisor e dividendo, sendo divisor maior que dividendo";
	cin>>num;
	cin>>num2;
	
	x=num;
	
	while(num>=num2){
		num-num2;
		num=num-num2;
		soma++;
	}
		
	
	cout<<"a divisao de "<<x<<" por "<<num2<<" e "<<soma;
	
		
	
	return 0;
}
