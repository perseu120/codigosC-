#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int ta=3, tu=4, A[ta][tu],B[tu][ta], multi[tu][tu];
	
	for(int i=0;i<ta;i++){//ler a primeira matriz
		for(int j=0;j<tu;j++){
			cin>>A[i][j];
		}
	}
	for(int i=0;i<tu;i++){//ler a segunda matriz
		for(int j=0;j<ta;j++){
			cout<<" digite";
			cin>>B[i][j];
		}
	}
	for(int i=0;i<tu;i++){//multiplicação da 3 matriz
		for(int j=0;j<=tu;j++){
		multi[i][j]=A[i][j]*B[j][i];
		}
	}
	
	for(int i=0;i<tu;i++){
		for(int j=0;j<tu;j++){
			cout<<multi[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
