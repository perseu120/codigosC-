#include <iostream>

using namespace std;

int main(){
	
	int hora_t, sal_h,op;
	
	
	while(op!=-1){
	cout<<"digite as horas trabalhada:";
	cin>>hora_t;
	cout<<"digite o salratio hora:";
	cin>>sal_h;
	
	if(hora_t<=40){
	cout<<"o salario e:"<<sal_h*hora_t<<endl;
	}
	else{
		cout<<"o salario e:"<<((sal_h*0.5)*(hora_t-40))+(sal_h*hora_t)<<endl;
	}
	
	
	
	cout<<"digite -1 para continuar ou 0 para continuar";
	cin>>op;
	
	}
	
	return 0;
}
