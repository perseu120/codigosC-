#include <iostream>

using namespace std;

int main() {
	
	int t, maxx, maxx2;

	cin>>t;

    maxx=t;
    maxx2=t;

	for(int i=1; i<9; i++)
	{
		cin>>t;
	
        if(t > maxx)
			{
				maxx=t;
		}
		
		

	}


	cout<<"primeiro maior: "<<maxx<<endl;
	cout<<"segundo maior: "<<maxx2<<endl;


	system ("PAUSE");

	return 0;

}
