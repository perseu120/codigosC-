#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cctype>

using namespace std;
int main ( ){
	
	setlocale( LC_ALL,"portuguese");
	
	//int m�s;
	
	cout<< "Digite um mes:";
	
	//cin>> m�s;
	
	if (m�s<1 || m�s>12)
	cout<<" o m�s digitado � invalido";
	
	else if(m�s==1)
		cout<<"o m�s digitado � janeiro";
		
	else if(m�s==2)
		cout<<"o m�s digitado � fevereiro";
		
	else if(m�s==3)
		cout<<"o m�s digitado � mar�o";
		
	else if(m�s==4)
		cout<<"o m�s digitado � abril";
		
	else if(m�s==5)
		cout<<"o m�s digitado � maio";
		
	else if(m�s==6)
		cout<<"o m�s digitado � junho";
		
	else if(m�s==7)
		cout<<"o m�s digitado � julho";
		
	else if(m�s==8)
		cout<<"o m�s digitado � agosto";
		
	else if(m�s==9)
		cout<<"o m�s digitado � setembro";
		
	else if(m�s==10)
		cout<<"o m�s digitado � outubro";
		
	else if(m�s==11)
		cout<<"o m�s digitado � novembro";
		
	else  if(m�s==12)
		cout<<"o m�s digitado � dezembro";
		
	return 0;
