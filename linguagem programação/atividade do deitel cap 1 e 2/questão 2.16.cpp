#include <iostream>

using namespace std;

int main(){
	
	double km, tq, lt, result=0;
	int  n;
	
	cout<<"digite a quantidade de tanques:";
	cin>>tq;
	n=tq;
	
	do{
		
		cout<<"digite quantos litros foram gastos:";
		cin>>lt;
		cout<<"digite quilometros rodados:";
		cin>>km;
		
		
		cout<<"a media desse tanque foi:"<<km/lt<<endl;
		
		result=result+(km/lt);
		
		tq--;
		
	} while(tq>0);
	
	cout<<"a media de litros gastos foi"<<result/n;
		
	return 0;
}
