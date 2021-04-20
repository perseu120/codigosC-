#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cctype>

using namespace std;
int main ( ){
	
	setlocale( LC_ALL,"portuguese");
	
	//int mês;
	
	cout<< "Digite um mes:";
	
	//cin>> mês;
	
	if (mês<1 || mês>12)
	cout<<" o mês digitado é invalido";
	
	else if(mês==1)
		cout<<"o mês digitado é janeiro";
		
	else if(mês==2)
		cout<<"o mês digitado é fevereiro";
		
	else if(mês==3)
		cout<<"o mês digitado é março";
		
	else if(mês==4)
		cout<<"o mês digitado é abril";
		
	else if(mês==5)
		cout<<"o mês digitado é maio";
		
	else if(mês==6)
		cout<<"o mês digitado é junho";
		
	else if(mês==7)
		cout<<"o mês digitado é julho";
		
	else if(mês==8)
		cout<<"o mês digitado é agosto";
		
	else if(mês==9)
		cout<<"o mês digitado é setembro";
		
	else if(mês==10)
		cout<<"o mês digitado é outubro";
		
	else if(mês==11)
		cout<<"o mês digitado é novembro";
		
	else  if(mês==12)
		cout<<"o mês digitado é dezembro";
		
	return 0;
