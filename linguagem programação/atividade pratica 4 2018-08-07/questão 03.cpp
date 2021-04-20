#include <iostream>

using namespace std;

int main()
{
	int t, maxx, minn, result=0;



	for(int i=0; i<20; i++)
	{
		cin>>t;

		if(i==0)
		{
			maxx=t;
			minn=t;
		}
		else
		{
			if(t > maxx)
			{
				maxx=t;
			}
			if(t<minn)
			{
				minn=t;
			}
		}

	}


	cout<<"Maior: "<<maxx<<endl;
	cout<<"Menor: "<<minn<<endl;


//	system ("PAUSE");

	return 0;
}

