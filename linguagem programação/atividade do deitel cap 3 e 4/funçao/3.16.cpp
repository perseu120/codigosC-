#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){
	srand(time(NULL));
	int n;
	
	n=rand()%2+1;
	cout<<n;
	
	
	return 0;
}
