#include <iostream>

using namespace std;

int quociente(int x, int y);
int resto (int x, int y);
void digito (int c, int h);


int main (){
	
	int num, num2, digit, h=0;
	
	cin>>num>>num2;
	cin>>digit;
	
	cout<<quociente(num, num2)<<endl;
	cout<<resto (num, num2)<<endl;
	digito (digit, h);
	
	
	return 0;
}
int quociente(int x, int y){
	int a;
	a=x/y;
	
	return a;
}

int resto (int x, int y){
	int a;
	a=x%y;
	return a;
}

void digito (int c, int h){
	
	while(c!=0){

	h=c%10+h*10;
	c=c/10;	
	
	}cout<<h;
	while(h!=0){

	cout<<h%10<<"  ";
	h=h/10;
	}
}













