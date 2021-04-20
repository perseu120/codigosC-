#include <iostream>
#include <locale.h>

using namespace std;

int main(){

int  num, soma=1, i=1;



do
{
cout<<"\ndigite numero";

cin>>num;

for( int i=1; i<=num;i++){


soma=soma*i;
}

cout<<"o fatorial de "<<num<<" é "<<soma;
soma=1;
}while(num>0);

return 0;
}
