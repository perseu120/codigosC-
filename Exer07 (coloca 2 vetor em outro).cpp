#include <iostream>


using namespace std;

int main(){
	int t=5, dez=10;
	int loock[t], thor[t], odin[t];
	
	for(int i=0;i<t;i++){
		cin>>loock[i]=0;
		cin>>thor[i]=0;
		
	}
	
	for(int i=0;i<dez;i+2){
		
		int j=0;
		odin[i]=loock[j];
		j++;
	}
	
	for(int i=1;i<dez;i+2){
		
		int j=0;
		odin[i]=thor[j];
		j++;
	}
	
	for(int i=0;i<dez;i++){
		
		cout<<odin[i]<<endl;
		
		
	}
		
	

	return 0;
}
