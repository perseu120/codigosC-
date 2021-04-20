#include <iostream>

using namespace std;

int main()
{
	int t, maxx, maxx2, result=0;

	cin>>t;

    maxx=t;
    maxx2=t;

	for(int i=0; i<9; i++)
	{
		cin>>t;

        if(t > maxx)
			{
				maxx=t;
		}
        
		if(t > maxx2&& t!=maxx)
			{
				maxx2=t;
		}
		

	}


	cout<<"primeiro maior: "<<maxx<<endl;
	cout<<"segundo maior: "<<maxx2<<endl;


	system ("PAUSE");

	return 0;
}


