#include<iostream>
using namespace std;
int main()
{
int odin=50, cont=0;

char thor[odin];

	cin>>thor;
	for(int i=0; thor[i]!='\0'; i++){
		cont++;
	}
	cout<<endl;	
	cout<<cont<<endl;

	return 0;
}

