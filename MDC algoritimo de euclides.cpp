#include <iostream>

using namespace std;

int mdc(int a, int b);
int mdc2(int x, int y);

int main(){
	
	int a, b ;
	
	cin>>a>>b;
	
	cout<<mdc2(a,b)<<endl;
	
	return 0;
}
int mdc(int a, int b){
	
	if(b==0){
		return a;
	}else{
		mdc(b, a%b);
	}
	
	
}
int mdc2(int x, int y){
	int aux=0;
	
	while(y!=0){
		
		if(x>=y){
			aux=y;
			y = x-y;
			x = aux;
			
		}else{
			aux=x;
			x = y-x;
			y = aux;
			
		}

	}
	
	return x;
	
}