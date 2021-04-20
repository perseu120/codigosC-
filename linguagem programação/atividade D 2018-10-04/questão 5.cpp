#include <iostream>

using namespace std;
int fun( int, int, int);

int main(){
int c;

cin>>c;

return 0;	
}
int fun(int a){
	if(a==0){
		return 1
	}
	if(a==1){
		return 2
		
	}
	else{
		return fun(a-1)+fun(a-2);
	}
	
}
