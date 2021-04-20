#include <iostream>
#include <cmath>
using namespace std;

float calculatecharger( float, float);

int main (){
	
	float car1, car2, car3, h1,h2,h3, th, tx;
	
	cin>>h1>>h2>>h3;

	
	cout<<"CARRO\t\tHORAS\t\tTAXA COBRADA\n";
	
	cout<<"carro 1\t\t"<<h1<<"\t\t"<<calculatecharger(car1,h1)<<endl;
	cout<<"carro 2\t\t"<<h2<<"\t\t"<<calculatecharger(car2,h2)<<endl;
	cout<<"carro 3\t\t"<<h3<<"\t\t"<<calculatecharger(car3,h3)<<endl;
	cout<<"TOTAL\t\t"<<h1+h2+h3<<"\t\t"<<calculatecharger(car1,h1)+calculatecharger(car2,h2)+calculatecharger(car3,h3);
		
	return 0;
}
float calculatecharger( float c, float h){
	
	if(h<=3){
		c=2;
	}else{
		c=2+((h-3)*0.5);
	}
	if(h==24){
		c=10;
	}
	
	
	return c;
}
