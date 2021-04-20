#include <iostream>
#include <cmath>
using namespace std;

int inteiro( float);
float dez( float);
float cent( float);
float milh( float);

int main (){
	
	float x;
	
	cin>>x;
	cout<<inteiro(x)<<endl;	
	cout<<dez(x)<<endl;
	cout<<cent(x)<<endl;
	cout<<milh(x)<<endl;
		
	return 0;
}
int inteiro( float a){
	
	int y;
	
	y=floor(a+.5);
	
	return y;
}
float dez( float b){
	
	int y;
	
	y=floor(b*10+.5);
	
	return y;
}
float cent( float c){
	
	int y;
	
	y=floor(c*100+.5);
	
	return y;
}
float milh( float d) {
	
	int y;
	
	y=floor(d*1000+.5);
	
	return y;
}