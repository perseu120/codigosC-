/*josimar cruz souza
data:30/07/2018
programa que receba uma letra e identifique se � vogal ou consoante*/

#include <iostream>
#include <locale.h>
#include <ctype.h>

using namespace std;

int main(){

setlocale (LC_ALL,"portuguese");

char alfa;

cout<< "digite uma letra:";
cin>>alfa;

if(isalpha(alfa)>0){
	alfa=toupper(alfa);
	if(alfa=='A'||alfa=='E'||alfa=='I'||alfa=='O'||alfa=='U')
	cout<<"vogal e n�o � numero";
	
	else
		cout<<"consoante e n�o � numero";
		
	}else
		cout<<"n�o ler numero";

	
return 0;
	
}
