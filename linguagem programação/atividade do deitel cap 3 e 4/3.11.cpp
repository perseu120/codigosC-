#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	int x;
	
	x=fabs(7.5);
	cout<<"\na fabs x: "<<x;
	
	x=floor(7.5);
	cout<<"\nb floor x: "<<x;
	
	x=fabs(0.0);
	cout<<"\nc fabs x: "<<x;
	
	x=ceil(0.0);
	cout<<"\nd ceil x: "<<x;
	
	x=fabs(-6.4);
	cout<<"\ne fabs x: "<<x;
	
	x=ceil(-6.4);
	cout<<"\nf ceil x: "<<x;
	
	x=ceil(-fabs(-8 + floor(-5.5)));
	cout<<"\ng ceil x: "<<x;
	
	
	
	
	
	return 0;
}
