/*josimar cruz souza
data10/08/2018
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float c;
	
	cout<<"fahrenheit"<<"		"<<"celsius\n";
	
	for(int f=50;f<150;f++){
		
		c=(f-32)/1.8;
		
		cout<<f<<"			"<<fixed<<setprecision(1)<<c<<endl;		
		
	}
	
	
	
	
	return 0;
}
